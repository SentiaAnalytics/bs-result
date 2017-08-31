type t 'err 'ok = 
  | Error 'err
  | Ok 'ok
  ;

let map f res => switch res {
| Error err => Error err
| Ok v => Ok (f v)
};

let chain f res => switch res {
| Error err => Error err
| Ok v => f v
};

let fromOption err opt => switch opt {
| None => Error err
| Some a => Ok a
};

let isOk res => switch res {
| Ok _ => true
| Error _ => false
};