
int FUN_0050bb70(int *param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 **ppuVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  pbVar1 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006455fb;
  pvStack_c = ExceptionList;
  pbVar3 = param_2;
  ExceptionList = &pvStack_c;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3 = pbVar3 + 4;
  }
  (**(code **)(*param_1 + 0xc))(param_1,param_2,100,&param_2);
  pvStack_c = (void *)FUN_00631d33(0x54);
  iVar2 = 0;
  if (pvStack_c != (void *)0x0) {
    iVar2 = FUN_005b9b50(*pbVar1,pbVar1[1],1);
  }
  ppuVar4 = &puStack_8;
  (**(code **)(*param_1 + 0xc))(param_1,*(undefined4 *)(iVar2 + 8),(uint)pbVar1[1] * (uint)*pbVar1);
  ExceptionList = ppuVar4;
  return iVar2;
}

