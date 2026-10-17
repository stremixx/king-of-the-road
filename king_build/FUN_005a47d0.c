
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_005a47d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,double param_7,byte *param_8,undefined4 param_9)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  bool bVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  byte *pbVar5;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005a3f70(param_2,param_3,param_4,param_5,param_6,(float)param_7,
               (float)((float10)param_7 * (float10)_DAT_0064a7b0),param_8,7,8,1,0x3dcccccd,
               0x3f333333,100,1);
  *param_1 = &PTR_FUN_006504a4;
  param_1[8] = &PTR_LAB_00650458;
  iVar8 = 0;
  iVar2 = *(int *)(param_1[0x19] + 0x1d4);
  local_4 = 0;
  iVar3 = *(int *)(iVar2 + 0x48);
  if (0 < iVar3) {
    pbVar9 = *(byte **)(iVar2 + 0x4c);
    pbVar4 = param_8;
    pbVar5 = pbVar9;
LAB_005a487f:
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < *pbVar9;
      if (bVar1 == *pbVar9) {
        if (bVar1 != 0) {
          bVar1 = pbVar4[1];
          bVar10 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_005a48a3;
          pbVar9 = pbVar9 + 2;
          pbVar4 = pbVar4 + 2;
          if (bVar1 != 0) goto LAB_005a487f;
        }
        iVar6 = 0;
      }
      else {
LAB_005a48a3:
        iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      }
      if (iVar6 == 0) break;
      iVar8 = iVar8 + 1;
      pbVar9 = pbVar5 + 0x7c;
      pbVar4 = param_8;
      pbVar5 = pbVar9;
    } while (iVar8 < iVar3);
  }
  if (iVar8 < iVar3) {
    *(uint *)(*(int *)(iVar2 + 0x4c) + 0x20 + iVar8 * 0x7c) =
         *(uint *)(*(int *)(iVar2 + 0x4c) + 0x20 + iVar8 * 0x7c) | 0x100;
  }
  uVar7 = FUN_005eea00(param_9);
  param_1[0x2c] = uVar7;
  param_1[0x2e] = 0x9999999a;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0x3fe99999;
  ExceptionList = local_c;
  return param_1;
}

