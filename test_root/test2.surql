create thing content {
  some: "new thing",
  other: [1, 2, 3]
};

select "thing" from thing;

select "thing" create thing;

select "thing" from thing;

select "thing" from thing where true
  order by 123, "something", $asda
  limit 10 skip 20;

define table something
define field thing.some on mytable type option<string>

create thing content {
  some: "new thing",
}

