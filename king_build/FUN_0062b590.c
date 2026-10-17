
void FUN_0062b590(uint param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar2 = FUN_0062b560(param_2);
  if (iVar2 == 0) {
    uVar1 = FUN_0062b560(param_2);
    if (0 < (int)param_1) {
      puVar8 = &DAT_00779fa4;
      for (uVar4 = param_1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      for (param_1 = param_1 & 3; param_1 != 0; param_1 = param_1 - 1) {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    }
    puVar8 = &DAT_00779fc4;
    for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = CONCAT22(uVar1,uVar1);
      puVar8 = puVar8 + 1;
    }
    return;
  }
  iVar7 = 0;
  iVar3 = iVar7;
  if (0 < iVar2) {
    do {
      uVar6 = (DAT_00779fc0 & 0xffff) >> 0xd;
      uVar4 = uVar6;
      if (uVar6 == 7) {
        uVar5 = 0x1000;
        uVar4 = 7;
        if ((DAT_00779fc0 & 0x1000) != 0) {
          do {
            uVar5 = uVar5 >> 1;
            uVar4 = uVar4 + 1;
          } while ((uVar5 & DAT_00779fc0 & 0xffff) != 0);
          goto LAB_0062b61a;
        }
LAB_0062b621:
        iVar3 = uVar6 - 3;
      }
      else {
LAB_0062b61a:
        iVar3 = 3;
        uVar6 = uVar4;
        if (6 < (int)uVar4) goto LAB_0062b621;
      }
      FUN_0062b320(iVar3);
      *(char *)((int)&DAT_00779fa4 + iVar7) = (char)uVar6;
      iVar3 = iVar7 + 1;
      if ((iVar3 == param_3) && (uVar4 = FUN_0062b560(2), -1 < (int)(uVar4 - 1))) {
        puVar8 = (undefined4 *)((int)&DAT_00779fa4 + iVar7 + 1);
        for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        iVar3 = iVar3 + uVar4;
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar8 = 0;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
      }
      iVar7 = iVar3;
    } while (iVar3 < iVar2);
  }
  if (iVar3 < (int)param_1) {
    puVar8 = (undefined4 *)((int)&DAT_00779fa4 + iVar3);
    for (uVar4 = param_1 - iVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = param_1 - iVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  FUN_0062b6b0(param_1,&DAT_00779fa4,8,&DAT_00779fc4);
  return;
}

