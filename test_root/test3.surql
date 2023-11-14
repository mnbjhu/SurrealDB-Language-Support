create thing content {
  some: "new thing",
  other: [1, 2, 3]
};

define table thing;

select "thing" from thing;

select "thing" create thing;
 
select "thing" 
from thing 
where some_bool and some_int > 5 + 6 / 2 = true;

select "thing" from thing where true
  order by 123, "something", $asda
  limit 10 skip 20;

define table something;
define field thing on something type string;
define field other on something type int;
define field inner on something type object;
define field inner.another on something type string;
define field inner.data on something type object;
define field inner.data.more on something type string;

create thing content {
  some: "new thing",
};

define function some($some: string, $other: array<string>): string {
  return $some;
}
create something
let $new = select "thing" from thing where some = $some;
select some from thing;

select some 
from thing;
select some
from something;
select some from something;

create thing content {
  some: "new thing",
  other: [1, 2, 3]
};

create s
