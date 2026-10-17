
undefined4 __thiscall FUN_005d1dd0(int param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (param_2 == (byte *)0x0) {
    *param_3 = 0;
    return 0;
  }
  iVar2 = FUN_005d1bb0(param_2);
  iVar2 = *(int *)(*(int *)(param_1 + 8) + iVar2 * 4);
  do {
    if (iVar2 == 0) break;
    pbVar5 = *(byte **)(iVar2 + 0xc);
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_005d1e2c:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_005d1e31;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_005d1e2c;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_005d1e31:
    if (iVar4 == 0) {
      *param_3 = *(undefined4 *)(iVar2 + 0x10);
      return 1;
    }
    iVar2 = *(int *)(iVar2 + 8);
  } while (iVar2 != 0);
  *param_3 = 0;
  return 0;
}

