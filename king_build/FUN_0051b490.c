
undefined4 * FUN_0051b490(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  iVar2 = param_2;
  piVar3 = (int *)FUN_0051b780(DAT_006cdc38 + 0x278,param_2);
  if (piVar3 == (int *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar5 = &param_2;
  param_2 = 0;
  iVar1 = *piVar3;
  uVar4 = FUN_0050b500(s_settings_006764d4,0,(iVar2 != 1) + '\x10');
  (**(code **)(iVar1 + 0x10))(piVar3,uVar4);
  piRam00000000 = piVar3;
  return puVar5;
}

