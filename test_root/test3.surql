create thing content {
  some: "new thing",
  other: [1, 2, 3]
};

select "thing" from thing;

select "thing" create thing;

select "thing" 
from thing 
where some_bool and some_int > 5 + 6 / 2 = true;

select "thing" from thing where true
  order by 123, "something", $asda
  limit 10 skip 20;

define table something;
define field thing.some on mytable type option<string>;

create thing content {
  some: "new thing",
};

define function some($some: string, $other: list<string>): string {
};
let $new = select "thing" from thing where some = $some;


