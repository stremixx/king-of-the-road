
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00587510(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6,
            undefined4 *param_7,uint *param_8)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  float10 fVar11;
  undefined1 local_64 [100];
  
  if (param_2 != 2) {
    return 0;
  }
  *(int *)(param_1 + 0x4b8) = param_3;
  switch(param_3) {
  case 1:
  case 4:
  case 5:
  case 6:
    if (param_5 != 0) {
      *(int *)(param_1 + 0x4c0) = param_5;
      *(undefined4 *)(param_1 + 0x4bc) = param_6;
      *(undefined4 *)(param_1 + 0x4c4) = *param_7;
      *(undefined4 *)(param_1 + 0x4c8) = param_7[1];
      *(undefined4 *)(param_1 + 0x4cc) = param_7[2];
      if (param_3 == 5) {
        *(uint *)(param_1 + 0x4d0) = *param_8;
      }
      else if (param_3 == 6) {
        uVar2 = 0xffffffff;
        puVar7 = param_8;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          uVar3 = *puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
        } while ((char)uVar3 != '\0');
        uVar2 = ~uVar2;
        uVar3 = 0xffffffff;
        puVar7 = param_8;
        do {
          puVar8 = puVar7;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          puVar8 = (uint *)((int)puVar7 + 1);
          uVar4 = *puVar7;
          puVar7 = puVar8;
        } while ((char)uVar4 != '\0');
        uVar3 = ~uVar3;
        puVar5 = (undefined4 *)((int)puVar8 - uVar3);
        puVar9 = (undefined4 *)(param_1 + 0x4d0);
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar9 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        uVar3 = 0xffffffff;
        pcVar6 = (char *)(uVar2 + (int)param_8);
        do {
          pcVar10 = pcVar6;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar10 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar10;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pcVar6 = pcVar10 + -uVar3;
        pcVar10 = (char *)(uVar2 + param_1 + 0x4d0);
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar3 = uVar3 & 3; param_8 = (uint *)(uVar2 - 1), uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar10 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar10 = pcVar10 + 1;
        }
      }
    }
    break;
  case 2:
    *(uint *)(param_1 + 0x4bc) = *param_8;
    break;
  case 3:
    fVar11 = (float10)FUN_005aabc0(param_1 + 0x1c4);
    if ((float10)_DAT_0064b310 <= fVar11) {
      uVar2 = *param_8 & 0xffff;
      if (2 < uVar2) {
        FUN_0061c369(local_64,s_The_number_of_filling_station_is_0067c8dc,uVar2);
        FUN_004e1e9c(local_64);
      }
      param_2 = -1;
      FUN_005db580(*(undefined4 *)(param_1 + 800),*(undefined4 *)(param_1 + 0x218),
                   *(undefined4 *)(param_1 + 0x21c),*(undefined4 *)(param_1 + 0x220),&LAB_005874f0,
                   &param_2);
      if (param_2 == -1) {
        FUN_004e1e9c(&DAT_0067c8ac);
      }
      else {
        uVar3 = FUN_0056e8e0(param_2);
        if (uVar2 == 0) {
          if ((uVar3 & 3) == 0) {
            FUN_0056e7f0(param_2,0,param_1);
          }
        }
        else if (uVar2 == 1) {
          if ((uVar3 & 0xc) == 0) {
            FUN_0056e7f0(param_2,1,param_1);
          }
        }
        else if ((uVar2 == 2) && ((uVar3 & 0x30) == 0)) {
          FUN_0056e7f0(param_2,2,param_1);
        }
      }
    }
    break;
  default:
    *(undefined4 *)(param_1 + 0x4b8) = 0;
    return 0;
  }
  *(uint *)(param_1 + 0x37c) = *(uint *)(param_1 + 0x37c) | 4;
  fVar11 = (float10)FUN_004e2035();
  *(float *)(param_1 + 0x388) = (float)fVar11;
  return 1;
}

