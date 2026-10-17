
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00595410(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined4 *puVar8;
  float local_c;
  float local_8;
  float local_4;
  
  if (DAT_006f5874 != 0) {
    if (((*(int *)(param_1 + 0x148) != 5) && (DAT_006f5874 == 1)) && (iVar3 = 0, 0 < DAT_006f59a8))
    {
      pfVar4 = (float *)&DAT_006f5740;
      do {
        local_c = *(float *)(param_1 + 0x74) - pfVar4[-2];
        local_8 = *(float *)(param_1 + 0x78) - pfVar4[-1];
        local_4 = *(float *)(param_1 + 0x7c) - *pfVar4;
        fVar7 = (float10)FUN_005aabc0(&local_c);
        if (fVar7 < (float10)_DAT_0064b31c) {
          *(undefined4 *)(param_1 + 0x148) = 5;
          puVar8 = (undefined4 *)(param_1 + 0x20);
          puVar5 = &DAT_006f5618 + iVar3 * 0xc;
          puVar6 = (undefined4 *)(param_1 + 0x80);
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar5 = &DAT_006f5618 + iVar3 * 0xc;
          puVar6 = puVar8;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          uVar1 = FUN_005ee8e0(0,(&DAT_006f5780)[iVar3],puVar8);
          FUN_00595f40(uVar1,puVar8);
          return;
        }
        iVar3 = iVar3 + 1;
        pfVar4 = pfVar4 + 3;
      } while (iVar3 < DAT_006f59a8);
    }
    if (*(int *)(param_1 + 0x144) != 0) {
      *(undefined4 *)(param_1 + 0x144) = 0;
      switch(*(undefined4 *)(param_1 + 0x148)) {
      case 0:
        FUN_005955a0(2);
        return;
      case 1:
        FUN_005955a0(4);
        return;
      case 2:
      case 5:
        FUN_005955a0(1);
        return;
      case 3:
        FUN_005955a0(0);
        break;
      case 4:
        FUN_005955a0(3);
        return;
      }
    }
  }
  return;
}

