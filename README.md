# tree-sitter-goctl

**tree-sitter-goctl** is a package designed for parsing goctl API files, offering support for a multitude of programming languages to parse API files seamlessly.

## Useful Links

- [go-zero Official Website](https://go-zero.dev/) - Discover more about go-zero.
- [goctl Overview](https://go-zero.dev/en/docs/tasks/dsl/api) - Dive deeper into the functionalities and usage of goctl.

## Use In Neovim

nvim-treesitter After goctl is installed, set up the following code.

```lua
vim.filetype.add {
  extension = {
    api = "goctl",
  },
}
```

## To-Do List

We are actively working to make **tree-sitter-goctl** available across various platforms to enable a broader range of developers to utilize it with ease. Here is our roadmap:

- [ ] **Publish to All Languages**
  - [ ] Release on npm
  - [ ] Release on Matrix
  - [ ] Release on crates.io
  - [ ] Release on pypi

Stay tuned for updates on our progress!
