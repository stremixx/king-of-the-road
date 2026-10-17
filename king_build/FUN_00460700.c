
undefined4 * FUN_00460700(undefined4 *param_1,undefined4 *param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  do {
    if (param_1 == param_2) {
      return param_1;
    }
    pbVar4 = *(byte **)(*(int *)*param_1 + 0x14);
    pbVar2 = param_3;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00460741:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00460746;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00460741;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00460746:
    if (iVar3 == 0) {
      return param_1;
    }
    param_1 = param_1 + 1;
  } while( true );
}

