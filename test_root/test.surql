select some, thing
from thing
where
  some = "updated"
    and
  other.thing < 21 = 4;

select "hello", other
from thing 
where 2 * 21 / 7 + 2 - 2;
select something from other;
update thing content {
  some: "updated",
  other: 2
};

define table thing;

define field some on thing type string;

define field other on thing type integer;
define field list on thing type array<string>;

select some from thing;

select "", "" from thing;

select some from thing;
select some, other from thing;

define function fn::add($a: float, $b: float) {
  select "" from thing;
}

create thing content {
  some: "new thing",
  other: [1, 2, 3]
};


define function add($a: float, $b: float): float {
  select "" from other;
  select some from thing;
};


create thing content {
  some: "new thing",
  other: [1, 2, 3]
};
