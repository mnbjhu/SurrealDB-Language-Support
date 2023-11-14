package features

import (
	"fmt"
	"strings"
)

type ValueType interface {
	IsInstanceOf(ValueType) bool
	String() string
}

type AnyType struct{}

func (s AnyType) IsInstanceOf(t ValueType) bool {
	_, ok := t.(AnyType)
	return ok
}

func (s AnyType) String() string {
	return "any"
}

type StringType struct{}

func (s StringType) IsInstanceOf(t ValueType) bool {
	if t.String() == "any" {
		return true
	}
	_, ok := t.(StringType)
	return ok
}

func (s StringType) String() string {
	return "string"
}

type IntType struct{}

func (s IntType) IsInstanceOf(t ValueType) bool {
	if t.String() == "any" {
		return true
	}
	_, ok := t.(IntType)
	return ok
}

func (s IntType) String() string {
	return "int"
}

type FloatType struct{}

func (s FloatType) IsInstanceOf(t ValueType) bool {
	if t.String() == "any" {
		return true
	}
	_, ok := t.(FloatType)
	return ok
}

func (s FloatType) String() string {
	return "float"
}

type BooleanType struct{}

func (s BooleanType) IsInstanceOf(t ValueType) bool {
	if t.String() == "any" {
		return true
	}
	_, ok := t.(BooleanType)
	return ok
}

func (s BooleanType) String() string {
	return "boolean"
}

type ArrayType struct {
	ElementType ValueType
}

func (s ArrayType) IsInstanceOf(t ValueType) bool {
	if t.String() == "any" {
		return true
	}
	arr, ok := t.(ArrayType)
	if !ok {
		return false
	}
	return s.ElementType.IsInstanceOf(arr.ElementType)
}

func (s ArrayType) String() string {
	return fmt.Sprintf("array<%v>", s.ElementType.String())
}

type ObjectType struct {
	Properties map[string]ValueType
}

func (s ObjectType) IsInstanceOf(t ValueType) bool {
	if t.String() == "any" {
		return true
	}
	obj, ok := t.(ObjectType)
	if !ok {
		return false
	}
	for key, value := range s.Properties {
		expected := obj.Properties[key]
		if expected == nil {
			return false
		}
		if !value.IsInstanceOf(expected) {
			return false
		}
	}
	return true
}

func (s ObjectType) String() string {
	body := ""
	for key, value := range s.Properties {
		body += fmt.Sprintf("\n%v: %v", key, value.String())
	}
	return fmt.Sprintf("{%v\n}", indent(body))
}

func indent(text string) string {
	lines := strings.Split(text, "\n")
	ret := ""
	for _, line := range lines {
		ret += "\t" + line + "\n"
	}
	return strings.TrimSuffix(ret, "\n")
}

type NothingType struct{}

func (s NothingType) IsInstanceOf(t ValueType) bool {
	return true
}

func (s NothingType) String() string {
	return "nothing"
}

type ErrorType struct{}

func (s ErrorType) IsInstanceOf(t ValueType) bool {
	return false
}

func (s ErrorType) String() string {
	return "error"
}
