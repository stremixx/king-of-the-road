
/* WARNING: Removing unreachable block (ram,0x0060040a) */
/* WARNING: Removing unreachable block (ram,0x0060040e) */

void FUN_006002d0(int *param_1,char *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_4;
  
  iVar3 = _strncmp(param_2,&DAT_00682c08,4);
  piVar2 = param_1;
  if (iVar3 != 0) {
    iVar4 = param_1[1] + (*param_1 - param_1[1]);
    iVar3 = *param_1;
    param_1[1] = iVar4;
    if ((uint)(param_1[2] - iVar3) < 0x800) {
      iVar6 = FUN_004837c0(0x800,iVar3,iVar4);
      piVar1 = (int *)*piVar2;
      uVar5 = piVar2[2] - (int)piVar1;
      if (uVar5 != 0) {
        if (uVar5 < 0x81) {
          param_1 = (int *)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4);
          FUN_00401aa0();
          *piVar1 = *param_1;
          *param_1 = (int)piVar1;
          DAT_0068c164 = 0;
        }
        else {
          FUN_0061c888(piVar1);
        }
      }
      *piVar2 = iVar6;
      piVar2[1] = (iVar4 - iVar3) + iVar6;
      piVar2[2] = iVar6 + 0x800;
    }
    FUN_0046e460(piVar2[1],param_2,param_2 + param_3);
    return;
  }
  iVar3 = param_1[1];
  iVar4 = *param_1;
  FUN_0046ecd0(iVar3,iVar3,iVar4,param_2,0);
  iVar6 = *piVar2;
  iVar3 = piVar2[1] + (iVar4 - iVar3);
  piVar2[1] = iVar3;
  if ((uint)(piVar2[2] - iVar6) < 0x800) {
    iVar4 = FUN_004837c0(0x800,iVar6,iVar3);
    piVar1 = (int *)*piVar2;
    uVar5 = piVar2[2] - (int)piVar1;
    if (uVar5 != 0) {
      if (uVar5 < 0x81) {
        FUN_00401aa0();
        *piVar1 = *(int *)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4);
        *(int **)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4) = piVar1;
        DAT_0068c164 = 0;
      }
      else {
        FUN_0061c888(piVar1);
      }
    }
    *piVar2 = iVar4;
    piVar2[1] = (iVar3 - iVar6) + iVar4;
    piVar2[2] = iVar4 + 0x800;
  }
  param_1 = (int *)FUN_0062a190(param_2 + 4,param_3 + -4);
  iVar3 = FUN_00631d33(0xc);
  if (iVar3 == 0) {
    local_4 = 0;
  }
  else {
    local_4 = FUN_006001e0(piVar2);
  }
  FUN_0062a2b0(param_1,local_4);
  FUN_0062a020(&param_1);
  FUN_0062a020(&local_4);
  return;
}

