
    servers = {
      "surrealdb",
      "nrs",
    },
    config = {
      surrealdb = function()
        return {
          cmd = { "surql-lsp", "--", "stdio" },
          filetypes = { "surql" },
          root_dir = require("lspconfig").util.root_pattern ".root_dir",
        }
      end,
      nrs = function()
        return {
          cmd = { "nrs-language-server", "--", "stdio" },
          filetypes = { "nrs" },
          root_dir = require("lspconfig").util.root_pattern ".root_dir",
        }
      end,
    },
  },


return {
  "nvim-treesitter/nvim-treesitter",
  opts = {
    ensure_installed = { "mynulang" },
  },
  highlight = {
    enable = true,
    disable = {},
  },
  indent = {
    enable = true,
    disable = {},
  },
  config = function(...)
    require "plugins.configs.nvim-treesitter"(...)
    local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
    parser_config.surql = {
      install_info = {
        url = "~/surql/tree-sitter-surql",
        files = {
          "src/parser.c",
        },
      },
    }
    local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
    parser_config.mynulang = {
      install_info = {
        url = "~/surql/mynulang",
        files = {
          "src/parser.c",
        },
      },
    }

    local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
    parser_config.giblang = {
      install_info = {
        url = "~/giblang/tree-sitter-giblang",
        files = {
          "src/parser.c",
        },
      },
    }
  end,
}
