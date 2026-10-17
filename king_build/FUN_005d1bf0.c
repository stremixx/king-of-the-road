
void __thiscall FUN_005d1bf0(int param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0064848b;
  local_c = ExceptionList;
  if ((param_2 != (byte *)0x0) && (bVar1 = *param_2, bVar1 != 0)) {
    pbVar7 = &DAT_0067ea5c;
    pbVar4 = param_2;
    do {
      bVar2 = *pbVar4;
      bVar8 = bVar2 < *pbVar7;
      if (bVar2 != *pbVar7) {
LAB_005d1c4c:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_005d1c51;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar8 = bVar2 < pbVar7[1];
      if (bVar2 != pbVar7[1]) goto LAB_005d1c4c;
      pbVar4 = pbVar4 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_005d1c51:
    pbVar4 = param_2;
    if (iVar5 != 0) {
      while (bVar1 == 0x20) {
        bVar1 = pbVar4[1];
        pbVar4 = pbVar4 + 1;
      }
      if (*pbVar4 != 0) {
        ExceptionList = &local_c;
        iVar5 = FUN_005d20b0(0x18);
        uStack_4 = 0;
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_005d1f50(param_2);
        }
        uStack_4 = 0xffffffff;
        if (iVar5 == 0) {
          FUN_005d2520(s_Not_enough_blocks_in_user_define_0067ea20,0);
        }
        *(undefined4 *)(iVar5 + 0x10) = param_3;
        *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(param_1 + 0xc);
        iVar6 = FUN_005d1bb0(param_2);
        iVar3 = *(int *)(*(int *)(param_1 + 8) + iVar6 * 4);
        if (iVar3 == 0) {
          *(int *)(*(int *)(param_1 + 8) + iVar6 * 4) = iVar5;
        }
        else {
          FUN_005d1840(iVar3);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}

