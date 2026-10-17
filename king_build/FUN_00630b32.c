
int __thiscall FUN_00630b32(int *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  do {
    if (param_3 == 0) {
      return local_8;
    }
    param_3 = param_3 + -1;
    if ((param_1[2] == 0) && ((undefined1 *)param_1[7] < (undefined1 *)param_1[8])) {
      *(undefined1 *)param_1[7] = *param_2;
      param_1[7] = param_1[7] + 1;
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x1c))(*param_2);
      if (iVar1 == -1) {
        return local_8;
      }
    }
    param_2 = param_2 + 1;
    local_8 = local_8 + 1;
  } while( true );
}

