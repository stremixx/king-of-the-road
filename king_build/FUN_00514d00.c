
undefined4
FUN_00514d00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,uint param_6,int *param_7,uint *param_8)

{
  char cVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [4];
  CHAR local_20 [32];
  
  FUN_0061c369(local_20,s_DRV_d_00675c44,param_1 + 1);
  FUN_00603230(local_20,param_2,0xffffffff,&param_1,DAT_006957c8);
  piVar2 = param_7;
  if (param_1 != -1) {
    if (param_1 == 0) {
      *param_8 = 1;
      GetPrivateProfileStringA
                (local_20,&DAT_00675c3c,&DAT_0068c120,(LPSTR)&DAT_006cd790,0x82,DAT_006957c8);
      return 0;
    }
    if (param_1 == 1) {
      *param_8 = 0;
      *param_7 = 3;
      return 0;
    }
    if (param_1 == 2) {
      *param_8 = 0;
      *param_7 = 5;
    }
    return 0;
  }
  iVar4 = FUN_005d7240(param_3,param_4,param_5,param_6 | 0x8000,local_24,param_7,&local_2c,&local_28
                      );
  puVar3 = param_8;
  *param_8 = (uint)(iVar4 != 0);
  if ((iVar4 != 0) != 0) {
    WritePrivateProfileStringA(local_20,&DAT_00675c3c,&DAT_0071f6d0,DAT_006957c8);
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_0071f6d0;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    pcVar8 = (char *)&DAT_006cd790;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_00603330(local_20,&DAT_00675c34,local_2c,DAT_006957c8);
    FUN_00603330(local_20,&DAT_00675c2c,local_28,DAT_006957c8);
    if (*puVar3 != 0) {
      param_1 = 0;
      goto LAB_00514e22;
    }
  }
  param_1 = (*piVar2 != 3) + 1;
LAB_00514e22:
  FUN_00603330(local_20,param_2,param_1,DAT_006957c8);
  return 1;
}

