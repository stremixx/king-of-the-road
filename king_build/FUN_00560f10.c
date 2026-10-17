
void __thiscall FUN_00560f10(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  char **ppcVar9;
  char *pcStack_2b4;
  int *piStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  int local_280;
  float local_27c;
  float local_278;
  float local_274;
  undefined4 local_270 [2];
  undefined4 local_268;
  undefined4 local_264;
  char *local_260;
  char *local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_24c;
  undefined4 local_248;
  undefined1 local_240 [4];
  int local_23c [8];
  undefined1 local_21c [32];
  char local_1fc [504];
  
  local_298 = (double)CONCAT44(0x560f26,(undefined4)local_298);
  FUN_00560c40();
  param_1[0x18] = param_2;
  param_1[0x32e] = param_3[9];
  param_1[0x32f] = param_3[10];
  param_1[0x330] = param_3[0xb];
  local_298 = (double)CONCAT44(*(undefined4 *)(param_2 + 0xc),local_240);
  local_2a0 = (double)CONCAT44(0x560f57,(undefined4)local_2a0);
  puVar3 = (undefined4 *)FUN_004365d0();
  param_1[0x332] = *puVar3;
  puVar3 = param_1;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_2a0 = (double)CONCAT44(param_1,local_270);
  local_2a8 = (double)CONCAT44(0x560f73,(undefined4)local_2a8);
  puVar3 = (undefined4 *)FUN_005aba00();
  puVar7 = param_1 + 0xc;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar7 = puVar7 + 1;
  }
  param_1[0x36c] = DAT_007015b0;
  param_1[0x36d] = DAT_007015b4;
  param_1[0x36e] = DAT_007015b8;
  param_1[0x36f] = DAT_00701590;
  param_1[0x370] = DAT_00701594;
  param_1[0x371] = DAT_00701598;
  param_1[0x372] = DAT_00701580;
  param_1[0x373] = DAT_00701584;
  local_2a8 = (double)CONCAT44(0xbe490fdb,local_270);
  param_1[0x374] = DAT_00701588;
  uStack_2ac = 0x560feb;
  pfVar4 = (float *)FUN_005ab5d0();
  local_27c = DAT_00701580 * *pfVar4 + DAT_00701584 * pfVar4[3] + DAT_00701588 * pfVar4[6];
  local_278 = DAT_00701580 * pfVar4[1] + DAT_00701584 * pfVar4[4] + DAT_00701588 * pfVar4[7];
  fVar1 = DAT_00701588 * pfVar4[8];
  fVar2 = DAT_00701584 * pfVar4[5];
  local_274 = DAT_00701580 * pfVar4[2];
  param_1[0x33d] = local_27c;
  param_1[0x329] = 1;
  param_1[0x313] = 0;
  local_274 = local_274 + fVar2 + fVar1;
  param_1[0x33e] = local_278;
  param_1[0x347] = param_1[0x18];
  param_1[0x33f] = local_274;
  param_1[0x348] = param_1[0x32e];
  param_1[0x349] = param_1[0x32f];
  param_1[0x34a] = param_1[0x330];
  uStack_2ac = *(undefined4 *)(param_1[0x18] + 0xc);
  piStack_2b0 = &local_280;
  pcStack_2b4 = (char *)0x5610bc;
  FUN_004365d0();
  if (local_280 == -1) {
    local_298 = 1.0517874160836208e-306;
    FUN_004e1e9c();
  }
  pfVar4 = (float *)(param_1 + 9);
  local_298 = *(double *)(param_1 + 10);
  local_2a0 = (double)CONCAT44(*pfVar4,local_280);
  local_2a8 = (double)CONCAT44(local_23c,0x561100);
  FUN_00437470();
  if (local_23c[0] == -1) {
    pcStack_2b4 = local_1fc;
    local_298 = (double)(float)param_1[0xb];
    uStack_2ac = *(undefined4 *)(param_1[0x18] + 0xc);
    local_2a0 = (double)(float)param_1[10];
    local_2a8 = (double)*pfVar4;
    piStack_2b0 = (int *)s__Helicopter__init0_pid__road__Ro_0067a218;
    FUN_0061c369();
    local_298 = *(double *)(param_1 + 10);
    local_2a0 = (double)CONCAT44(*pfVar4,local_21c);
    local_2a8 = (double)CONCAT44(0x561164,(undefined4)local_2a8);
    piVar5 = (int *)FUN_00437300();
    piVar8 = local_23c;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar8 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar8 = piVar8 + 1;
    }
    if (local_23c[0] == -1) {
      local_298 = (double)CONCAT44(local_1fc,0x56118c);
      FUN_004e1e9c();
    }
    local_298 = (double)ZEXT48(local_1fc);
    local_2a0 = (double)CONCAT44(0x56119e,(undefined4)local_2a0);
    FUN_005d2250();
    local_24c = 0xffffffff;
    local_248 = 0xffffffff;
    local_298 = (double)CONCAT44(local_270,(undefined4)local_298);
    local_270[0] = 0;
    piVar5 = local_23c;
    ppcVar9 = &pcStack_2b4;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *ppcVar9 = (char *)*piVar5;
      piVar5 = piVar5 + 1;
      ppcVar9 = ppcVar9 + 1;
    }
    local_268 = 0;
    local_264 = 0;
    local_260 = s_UNDEFINED_MODULE_0066c638;
    local_25c = s_UNDEFINED_ROOM_0066c628;
    local_258 = 0;
    local_254 = 0;
    FUN_00438e50();
    iVar6 = FUN_005ee8e0(0,local_25c);
    if (iVar6 == 0) {
      param_1[0x377] = 1;
      return;
    }
  }
  iVar6 = *(int *)(DAT_0068be98 + local_23c[0] * 4);
  local_298 = (double)CONCAT44(CONCAT22((short)((uint)local_23c[0] >> 0x10),
                                        *(undefined2 *)(*(int *)(iVar6 + 0x74) + 0x10)),
                               CONCAT22((short)((uint)iVar6 >> 0x10),
                                        *(undefined2 *)(*(int *)(iVar6 + 0x70) + 0x10)));
  local_2a0 = (double)CONCAT44(0x561248,(undefined4)local_2a0);
  FUN_00560630();
  return;
}

