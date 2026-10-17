
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062d290(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  DAT_0077d24c = param_1;
  iVar3 = 0;
  _DAT_0077bf48 = param_2;
  DAT_0077a458 = 0;
  DAT_0077b5fc = 0;
  if (DAT_0077bece == 0) {
    param_1 = 0;
    iVar6 = 0;
    do {
      uVar7 = 1 << ((byte)(&DAT_00689368)[iVar6] & 0x1f);
      (&DAT_0077b588)[iVar6] = iVar3;
      if (0 < (int)uVar7) {
        uVar1 = (undefined1)iVar6;
        puVar8 = (undefined4 *)((int)&DAT_0077a488 + iVar3);
        for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = uVar1;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        iVar3 = param_1 + uVar7;
        param_1 = iVar3;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x1c);
    (&DAT_0077a487)[iVar3] = (char)iVar6;
    iVar6 = 0;
    iVar3 = 0;
    do {
      uVar7 = 1 << ((byte)(&DAT_006893dc)[iVar3] & 0x1f);
      (&DAT_0077c8e0)[iVar3] = iVar6;
      if (0 < (int)uVar7) {
        uVar1 = (undefined1)iVar3;
        puVar8 = (undefined4 *)((int)&DAT_0077b600 + iVar6);
        for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = uVar1;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        iVar6 = iVar6 + uVar7;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x10);
    iVar6 = iVar6 >> 7;
    for (; iVar3 < 0x1e; iVar3 = iVar3 + 1) {
      (&DAT_0077c8e0)[iVar3] = iVar6 << 7;
      uVar7 = 1 << ((char)(&DAT_006893dc)[iVar3] - 7U & 0x1f);
      if (0 < (int)uVar7) {
        uVar1 = (undefined1)iVar3;
        puVar8 = (undefined4 *)(&DAT_0077b700 + iVar6);
        for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = uVar1;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        iVar6 = iVar6 + uVar7;
      }
    }
    puVar8 = (undefined4 *)&DAT_0077a464;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    puVar4 = &DAT_0077ba4a;
    do {
      *puVar4 = 8;
      puVar4 = puVar4 + 2;
      DAT_0077a474 = DAT_0077a474 + 1;
    } while ((int)puVar4 < 0x77bc87);
    puVar4 = &DAT_0077bc8a;
    do {
      *puVar4 = 9;
      puVar4 = puVar4 + 2;
      DAT_0077a476 = DAT_0077a476 + 1;
    } while ((int)puVar4 < 0x77be47);
    puVar4 = &DAT_0077be4a;
    do {
      *puVar4 = 7;
      puVar4 = puVar4 + 2;
      DAT_0077a472 = DAT_0077a472 + 1;
    } while ((int)puVar4 < 0x77bea7);
    puVar4 = &DAT_0077beaa;
    do {
      *puVar4 = 8;
      puVar4 = puVar4 + 2;
      DAT_0077a474 = DAT_0077a474 + 1;
    } while ((int)puVar4 < 0x77bec7);
    FUN_0062d530(&DAT_0077ba48,0x11f);
    iVar3 = 0;
    puVar4 = &DAT_0077becc;
    do {
      puVar4[1] = 5;
      uVar2 = FUN_0062e2e0(iVar3,5);
      *puVar4 = uVar2;
      puVar4 = puVar4 + 2;
      iVar3 = iVar3 + 1;
    } while ((int)puVar4 < 0x77bf44);
    FUN_0062d4c0();
  }
  return;
}

