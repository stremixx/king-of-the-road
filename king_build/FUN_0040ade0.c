
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ade0(int *param_1)

{
  int *piVar1;
  int iVar2;
  double *pdVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *local_3c [3];
  double local_30;
  undefined1 local_20 [28];
  
  if (DAT_0068c0e8 == 0) {
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    FUN_004772b0(param_1);
    piVar4 = param_1;
    if ((((*(double *)(param_1 + 0x34) <= _DAT_0064a668) && ((char)param_1[0x32] == '\0')) &&
        (*(double *)(param_1 + 0x3c) <= _DAT_0064a668)) &&
       (((*(double *)(param_1 + 0x3e) <= _DAT_0064a668 &&
         (*(double *)(param_1 + 0x40) <= _DAT_0064a668)) && ((char)param_1[0x42] == '\0')))) {
      local_3c[0] = (int *)*DAT_0068a8f0;
      piVar4 = DAT_0068a8f0;
      if (local_3c[0] != DAT_0068a8f0) {
        do {
          iVar2 = FUN_0040a950(local_3c[0]);
          if (iVar2 != 0) {
            iVar2 = FUN_0040a950(local_3c[0]);
            iVar2 = *(int *)(iVar2 + 0x54);
            if (iVar2 == 5) {
              FUN_0041d3f0(local_3c);
              iVar2 = FUN_0040a950(iVar2);
              piVar1 = DAT_0068a8f0;
              piVar4 = *(int **)(iVar2 + 0x3c0);
              if (piVar4 == param_1) {
                FUN_0041d3f0(local_3c);
                iVar2 = FUN_0040a950(piVar4);
                *(int **)(iVar2 + 0x3c0) = piVar1;
                uVar6 = extraout_ECX;
                FUN_0041d3f0(local_3c);
                FUN_004042b0(uVar6);
                pdVar3 = (double *)FUN_0040b030(local_20);
                local_30 = pdVar3[1] - _DAT_0068aa18;
                if (SQRT((pdVar3[2] - _DAT_0068aa20) * (pdVar3[2] - _DAT_0068aa20) +
                         local_30 * local_30 + (*pdVar3 - _DAT_0068aa10) * (*pdVar3 - _DAT_0068aa10)
                        ) < _DAT_0064a680) {
                  uVar7 = 0x405e0000;
                  uVar5 = 0;
                  uVar6 = extraout_ECX_00;
                  uVar8 = extraout_ECX_00;
                  FUN_0041d3f0(local_3c);
                  FUN_004042b0(uVar6);
                  FUN_00477d50(uVar8,uVar5,uVar7);
                }
              }
            }
          }
          local_3c[0] = (int *)*local_3c[0];
          piVar4 = DAT_0068a8f0;
        } while (local_3c[0] != DAT_0068a8f0);
      }
    }
    uVar8 = 0;
    uVar6 = 0x12;
    FUN_0041d3f0(&param_1);
    FUN_004015a0(piVar4,uVar6,uVar8);
  }
  return;
}

