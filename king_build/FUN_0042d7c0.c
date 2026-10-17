
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042d7c0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  float10 fVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *local_8;
  int *local_4;
  
  FUN_0042d720();
  fVar4 = (float10)FUN_00483b10();
  _DAT_00689780 = (double)fVar4;
  DAT_0068a8f8 = 1;
  fVar4 = (float10)FUN_00401000();
  _DAT_0068c058 = (double)fVar4;
  _DAT_0068c0f0 = (double)(fVar4 - (float10)_DAT_0068c0f8);
  FUN_0042d470();
  FUN_00477c00(&local_4);
  if (local_4 != DAT_0068a8f0) {
    _DAT_0068aa10 = *(undefined8 *)(local_4 + 0x9c);
    _DAT_0068aa18 = *(undefined8 *)(local_4 + 0x9e);
    _DAT_0068aa20 = *(undefined8 *)(local_4 + 0xa0);
  }
  FUN_004843e0();
  DAT_0068c094 = DAT_0068c094 + 1;
  if (DAT_0066b60a != '\0') {
    DAT_0068c09c = 200;
    FUN_00424640();
    DAT_0066b60a = '\0';
  }
  FUN_0042da40();
  FUN_00446ac0();
  if (DAT_0068c27c == '\0') {
    FUN_00423b80();
  }
  piVar3 = (int *)*DAT_0068a8f0;
  local_8 = piVar3;
  if (piVar3 != DAT_0068a8f0) {
    do {
      local_8 = piVar3;
      if (DAT_0068c27c == '\0') {
LAB_0042d8b9:
        piVar6 = piVar3;
        FUN_0041d3f0(&local_8);
        FUN_004042b0(piVar3);
        FUN_0041af30(piVar6);
        iVar2 = extraout_ECX;
        if (DAT_0068c0e8 == 0) {
          iVar7 = extraout_ECX;
          FUN_0041d3f0(&local_8);
          FUN_004042b0(iVar2);
          FUN_004774c0(iVar7);
          iVar2 = extraout_ECX_00;
        }
        if (DAT_0068c0e8 == 1) {
LAB_0042d927:
          iVar7 = iVar2;
          FUN_0041d3f0(&local_8);
          FUN_004042b0(iVar2);
          FUN_00416a80(iVar7);
          iVar2 = extraout_ECX_01;
        }
        else if (DAT_0068c0e8 == 0) {
          iVar2 = FUN_0040a950(local_8);
          iVar2 = *(int *)(iVar2 + 0x5c);
          if (iVar2 == 5) goto LAB_0042d927;
        }
        if (DAT_0068c0e8 == 2) {
          iVar7 = iVar2;
          FUN_0041d3f0(&local_8);
          FUN_004042b0(iVar2);
          FUN_004170a0(iVar7);
          iVar2 = extraout_ECX_02;
        }
        iVar7 = iVar2;
        FUN_0041d3f0(&local_8);
        FUN_004042b0(iVar2);
        FUN_00417200(iVar7);
        uVar5 = extraout_ECX_03;
        FUN_0041d3f0(&local_8);
        FUN_004042b0(uVar5);
        cVar1 = FUN_004164a0();
        if (cVar1 != '\0') {
          uVar5 = extraout_ECX_04;
          uVar8 = extraout_ECX_04;
          FUN_0041d3f0(&local_8);
          FUN_004042b0(uVar5);
          FUN_00419d80(uVar8);
        }
      }
      else {
        iVar2 = FUN_0040a950(piVar3);
        piVar3 = *(int **)(iVar2 + 0x58);
        if (((uint)piVar3 & 0x100) == 0) goto LAB_0042d8b9;
      }
      piVar3 = (int *)*local_8;
      local_8 = piVar3;
    } while (piVar3 != DAT_0068a8f0);
  }
  FUN_0042a590();
  if (DAT_0068c0e8 == 0) {
    FUN_00427a00();
  }
  FUN_00424030();
  FUN_00424640();
  if (DAT_0068c0e8 == 0) {
    FUN_00428890();
  }
  FUN_004286a0();
  FUN_0042cc00();
  FUN_0042d030();
  FUN_0046de00();
  DAT_0068c050 = DAT_0068c058;
  DAT_0068c054 = DAT_0068c05c;
  return;
}

