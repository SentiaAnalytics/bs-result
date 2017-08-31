type t 'err 'ok = 
  | Error 'err
  | Ok 'ok
  ;

let map : ('a => 'b) => t 'x 'a => t 'x 'b;

let chain : ('a => t 'x 'b) => t 'x 'a => t 'x 'b;

let fromOption : 'x => option 'a => t 'x 'a;

let isOk : t 'x 'a => bool;