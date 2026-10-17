
undefined4 __thiscall FUN_00632d22(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *local_c;
  undefined4 *puStack_8;
  
  iVar1 = param_1[1];
  if ((iVar1 == 0) || ((short)iVar1 == -1)) {
    uVar2 = 1;
  }
  else {
    param_1[6] = 0;
    local_c = param_1;
    puStack_8 = param_1;
    uVar2 = (**(code **)(*param_2 + 0xc))(iVar1,0xffffffff,param_1,0);
    if ((param_3 != 0) && (param_1[6] == 0)) {
      local_c = (undefined4 *)0x0;
      uVar3 = (**(code **)(*param_2 + 0xc))(param_1[1],0,param_1,&local_c);
      (**(code **)*param_1)(uVar3);
    }
  }
  return uVar2;
}

