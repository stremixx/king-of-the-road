
exception * __thiscall FUN_00462a80(exception *param_1,byte param_2)

{
  exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    FUN_00631d5c(param_1);
  }
  return param_1;
}

