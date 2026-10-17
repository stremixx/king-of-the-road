
undefined4 FUN_005e8b00(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined2 uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  undefined4 uVar7;
  byte local_8 [8];
  
  FUN_0061d8bf(local_8,4,1,param_2);
  local_8[4] = 0;
  pbVar5 = &DAT_00682478;
  pbVar3 = local_8;
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_005e8b52:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_005e8b57;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_005e8b52;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_005e8b57:
  if (iVar4 == 0) {
    *(undefined2 *)(param_1 + 8) = 1;
  }
  else {
    pbVar5 = &DAT_00682470;
    pbVar3 = local_8;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_005e8b95:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_005e8b9a;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_005e8b95;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_005e8b9a:
    if (iVar4 == 0) {
      *(undefined2 *)(param_1 + 8) = 1;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x80;
    }
    else {
      pbVar5 = &DAT_00682468;
      pbVar3 = local_8;
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_005e8be0:
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_005e8be5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_005e8be0;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_005e8be5:
      if (iVar4 == 0) {
        *(undefined2 *)(param_1 + 8) = 2;
      }
      else {
        pbVar5 = &DAT_00682460;
        pbVar3 = local_8;
        do {
          bVar1 = *pbVar3;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_005e8c22:
            iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_005e8c27;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_005e8c22;
          pbVar3 = pbVar3 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_005e8c27:
        if (iVar4 != 0) {
          return 0;
        }
        *(undefined2 *)(param_1 + 8) = 1;
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x80;
      }
    }
  }
  uVar2 = FUN_005aa7c0(param_2);
  *(undefined2 *)(param_1 + 4) = uVar2;
  uVar2 = FUN_005aa7c0(param_2);
  *(undefined2 *)(param_1 + 6) = uVar2;
  *(int *)(param_1 + 0xc) = param_3 + -0x308;
  iVar4 = FUN_005d7a00();
  if (iVar4 == 2) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) << 1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_4 != 0) {
    uVar7 = 1;
    iVar4 = FUN_0061db0f(param_2,1);
    FUN_005bb560(iVar4 + 0x300 + param_4,uVar7);
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x200;
  }
  return 1;
}

