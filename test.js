const Parser = require('tree-sitter');
const Api = require('./treesitter/api');

const parser = new Parser();
parser.setLanguage(Api);

const sourceCode = `
syntax = "v1"

import "foo"
import (
  "bar"
  "baz"
)

info (
  title: "Example API"
)

type (
  Integer int
  String string
)

type User struct {
  ID int
  Name string
}

@server (
  name: "UserService"
)
service UserService {
  @doc (description: "Get user by ID")
  @server (method: "GET", path: "/users/:id")
  getUser (id int) returns (User)
}
`;

const tree = parser.parse(sourceCode);
console.log(tree.rootNode.toString());