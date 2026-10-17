
void __thiscall FUN_00635d6e(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 local_208 [512];
  undefined4 local_8;
  
  iVar1 = (**(code **)(*param_1 + 0xc))(local_208,0x200,&local_8);
  if (iVar1 == 0) {
    if (param_3 == 0) {
      param_3 = 0xf020;
    }
    FUN_00636d9b(param_3,param_2,local_8);
  }
  else {
    FUN_00636d63(local_208,param_2,local_8);
  }
  return;
}

