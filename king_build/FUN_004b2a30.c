
undefined4 FUN_004b2a30(char param_1)

{
  if (((((((param_1 != '|') && (param_1 != '!')) && (param_1 != '$')) &&
        ((param_1 != '%' && (param_1 != '&')))) &&
       ((param_1 != '*' && ((param_1 != '+' && (param_1 != '-')))))) && (param_1 != '.')) &&
     (((((param_1 != '/' && (param_1 != ':')) && (param_1 != '<')) &&
       (((param_1 != '=' && (param_1 != '>')) &&
        ((param_1 != '?' && ((param_1 != '@' && (param_1 != '^')))))))) &&
      ((param_1 != '_' && (param_1 != '~')))))) {
    return 0;
  }
  return 1;
}

