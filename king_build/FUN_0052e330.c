
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0052e330(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  int local_428 [4];
  undefined4 uStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  undefined1 auStack_3fc [48];
  undefined1 auStack_3cc [32];
  undefined1 auStack_3ac [32];
  undefined1 auStack_38c [100];
  undefined1 auStack_328 [100];
  undefined1 auStack_2c4 [100];
  undefined1 auStack_260 [100];
  undefined1 auStack_1fc [504];
  
  if ((DAT_006ce300 != (code *)0x0) && (iVar1 = (*DAT_006ce300)(param_1,param_2), iVar1 != 0)) {
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 / 100000 == 2) {
    piVar4 = *(int **)(param_1 + 0x18);
    piVar6 = local_428;
    for (iVar5 = 0x27; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
    }
    iVar1 = iVar1 % 1000;
    iVar5 = FUN_0052e2b0();
    iVar2 = FUN_005ee8e0();
    iVar3 = FUN_005ee8e0();
    if ((((iVar2 != 0) && (iVar3 != 0)) && (-1 < iVar5)) &&
       (((iVar5 < DAT_006cd2ac && (fVar7 = (float10)FUN_005aabc0(), fVar7 <= (float10)_DAT_0064c7a8)
         ) && (fVar7 = (float10)FUN_005aabc0(), fVar7 <= (float10)_DAT_0064b2e8)))) {
      if ((param_2 & 1) != 0) {
        DAT_0067e7b8 = *(undefined4 *)(param_1 + 4);
        if (local_428[2] == 0) {
          piVar4 = (int *)FUN_004e17a0();
        }
        else {
          piVar4 = (int *)FUN_004e1a50(DAT_006ee15c,iVar2,iVar3,auStack_3fc,local_428[0],iVar1,
                                       uStack_418,0);
        }
        piVar4[0x56] = *(int *)(param_1 + 4);
        (**(code **)(*piVar4 + 0x90))(&fStack_414,0);
        (**(code **)(*piVar4 + 0x94))(&fStack_410,0);
        if (iVar5 != 0) {
          (**(code **)(*piVar4 + 0x18))();
        }
        *(int **)(param_1 + 0x1c) = piVar4;
        return 1;
      }
      return 1;
    }
    FUN_0061c369(auStack_328,s_obj_name___s__obj__0X_006775a0,auStack_3ac,iVar3);
    FUN_0061c369(auStack_38c,s_room_name___s__room__0X_00677584,auStack_3cc,iVar2);
    FUN_0061c369(auStack_2c4,s_type__d_numberTech__d_num__d_max_00677554,2,iVar5,iVar1,
                 DAT_006cd2ac + 1);
    FUN_0061c369(auStack_260,s_V___f__f__f____>1000__W___f__f___00677524,(double)fStack_414,
                 (double)fStack_410,(double)fStack_40c,(double)fStack_408,(double)fStack_404,
                 (double)fStack_400);
    FUN_0061c369(auStack_1fc,s__TrashBox_loadTB____s_s_s_s_00677508,auStack_328,auStack_38c,
                 auStack_2c4,auStack_260);
    FUN_004e1e9c();
  }
  return 0;
}

