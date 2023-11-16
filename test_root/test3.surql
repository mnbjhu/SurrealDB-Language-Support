create thing 
content {
	some: "string",
	other: [1,2,3],
	more: {
		foo: "bar"
	}
};

define table thing;
define field some on thing type string;
define field other on thing type array<int>;
define field more on thing type object;
define field more.foo on thing type string;

let $thing = "My Thing";


define function fn::my_function($some: string) {
	let $another = fn::other();
	return "Hello " + $some;
};

