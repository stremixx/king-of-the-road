
void FUN_00484230(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint local_18;
  undefined4 local_14;
  uint local_8;
  undefined4 local_4;
  
  piVar6 = DAT_0068be60;
  if (DAT_0068be60 != DAT_0068be64) {
    do {
      iVar1 = *(int *)(*piVar6 + 0xc4 + param_1 * 4);
      if (iVar1 != 0) {
        FUN_00631d5c(iVar1);
      }
      *(undefined4 *)(*piVar6 + 0xc4 + param_1 * 4) = 0;
      if ((*(byte *)(*piVar6 + 0xc) & 8) == 0) {
        uVar2 = FUN_00631d33((int)DAT_0068be64 - (int)DAT_0068be60 >> 2);
        *(undefined4 *)(*piVar6 + 0xc4 + param_1 * 4) = uVar2;
        uVar4 = (int)DAT_0068be64 - (int)DAT_0068be60 >> 2;
        puVar3 = *(undefined4 **)(*piVar6 + 0xc4 + param_1 * 4);
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar3 = 0xffffffff;
          puVar3 = puVar3 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar3 = 0xff;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != DAT_0068be64);
  }
  if (DAT_0068be98 != DAT_0068be9c) {
    local_18 = local_18 & 0xffffff00;
    local_8 = local_8 & 0xffffff00;
    piVar6 = DAT_0068be98;
    do {
      puVar7 = (undefined4 *)(param_1 * 0x20 + 0x30 + *piVar6);
      puVar3 = (undefined4 *)(*piVar6 + (param_1 + 2) * 0x20);
      piVar6 = piVar6 + 1;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = local_18;
      puVar7[3] = local_14;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = local_8;
      puVar3[3] = local_4;
    } while (piVar6 != DAT_0068be9c);
  }
  return;
}

