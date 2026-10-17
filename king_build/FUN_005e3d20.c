
undefined4 __thiscall FUN_005e3d20(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_4;
  
  piVar1 = param_2;
  local_4 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = 4;
  (**(code **)(*param_2 + 0x10))(param_2,&local_4,4,&param_2);
  (**(code **)(*piVar1 + 0x10))(piVar1,*(undefined4 *)(param_1 + 0x18),uVar2,&stack0xfffffff4);
  return 0;
}

