
undefined4 __thiscall FUN_005ecce0(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  char *local_50;
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648d2b;
  local_c = ExceptionList;
  DAT_0071efcc = 0;
  ExceptionList = &local_c;
  local_4c[0] = FUN_0061f43c(param_2);
  local_4c[1] = FUN_0061f43c(piVar2);
  local_4c[2] = FUN_0061f43c(piVar2);
  FUN_0061f43c(piVar2);
  local_4c[3] = 0;
  FUN_005aa810(piVar2);
  iVar3 = FUN_005aa810(piVar2);
  FUN_005aa810(piVar2);
  iVar4 = FUN_005aa810(piVar2);
  FUN_005aa810(piVar2);
  if (iVar3 != 0) {
    FUN_0061dd53(piVar2,iVar3 * 4,0);
    iVar3 = FUN_005aa810(piVar2);
    param_2 = (int *)FUN_00631d33(iVar3 * 0x7c + 4);
    local_4 = 0;
    if (param_2 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = param_2 + 1;
      *param_2 = iVar3;
      FUN_0061d173(piVar5,0x7c,iVar3,&LAB_005e9e60,FUN_004030a0);
    }
    iVar11 = 0;
    local_4 = 0xffffffff;
    *(int **)(param_1 + 0x4c) = piVar5;
    *(int *)(param_1 + 0x48) = iVar3;
    if (0 < iVar3) {
      do {
        param_2 = (int *)iVar3;
        FUN_0061d8bf(local_4c,0x20,1,piVar2);
        uVar8 = 0xffffffff;
        pcVar10 = (char *)(*(int *)(param_1 + 0x4c) + iVar11);
        iVar11 = iVar11 + 0x7c;
        pcVar12 = local_4c;
        do {
          pcVar13 = pcVar12;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar13 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar13;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar12 = pcVar13 + -uVar8;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar10 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar10 = pcVar10 + 1;
        }
        iVar3 = (int)param_2 + -1;
      } while ((int)param_2 + -1 != 0);
      param_2 = (int *)0x0;
    }
  }
  if (iVar4 == 0) {
LAB_005ecf84:
    uVar6 = 1;
  }
  else {
    FUN_0061dd53(piVar2,iVar4 * 4,0);
    iVar3 = FUN_005aa810(piVar2);
    if (iVar3 == 0x6f) {
      do {
        while( true ) {
          do {
            iVar3 = FUN_005aa810(piVar2);
          } while (iVar3 == 0x1bc);
          if (iVar3 == 0xde) goto LAB_005ecf84;
          if (iVar3 != 0x14d) goto LAB_005ece4e;
          iVar3 = FUN_005eee60(piVar2,param_1,&param_2,0,0,&local_50);
          DAT_007228e8 = DAT_007228e8 + 1;
          if ((DAT_007228e8 % 5 == 0) && (*(code **)(param_1 + 0x38) != (code *)0x0)) {
            (**(code **)(param_1 + 0x38))();
          }
          if (iVar3 == 0) break;
          FUN_005ecc90(iVar3);
          iVar3 = FUN_005aa810(piVar2);
          if (iVar3 != 0x22b) goto LAB_005ece4e;
        }
        if (param_2 == (int *)0x0) {
          FUN_0061dd53(piVar2,0x2c,1);
          iVar3 = FUN_005aa810(piVar2);
        }
        else {
          if (param_2 != (int *)0x1) break;
          puVar7 = (undefined4 *)FUN_00631d33(0x68);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7[1] = 0;
            puVar7[2] = 0;
            *puVar7 = &PTR_FUN_0064c7ac;
            puVar7[0x14] = 0;
            puVar7[0x13] = 0;
            puVar7[0x16] = 0x3f800000;
            puVar7[0x15] = 0x3f800000;
            puVar7[0x18] = 0;
            puVar7[0x17] = 0;
            *(undefined1 *)(puVar7 + 0xb) = 0;
            *(undefined1 *)(puVar7 + 3) = 0;
            puVar7[0x19] = 0;
          }
          if (*local_50 != '\0') {
            FUN_005d1bf0(local_50,puVar7);
          }
          FUN_005eacd0(piVar2);
          if (*(int *)(param_1 + 0x78) != 0) {
            FUN_005d1840(puVar7);
          }
          *(undefined4 **)(param_1 + 0x78) = puVar7;
          iVar3 = FUN_005aa810(piVar2);
        }
      } while (iVar3 == 0x22b);
    }
LAB_005ece4e:
    uVar6 = 0;
  }
  ExceptionList = local_c;
  return uVar6;
}

