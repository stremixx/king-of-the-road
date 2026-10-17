
/* WARNING: Removing unreachable block (ram,0x004a0083) */
/* WARNING: Removing unreachable block (ram,0x004a0093) */
/* WARNING: Removing unreachable block (ram,0x0049ff72) */
/* WARNING: Removing unreachable block (ram,0x0049ff86) */
/* WARNING: Removing unreachable block (ram,0x0049ff8e) */
/* WARNING: Removing unreachable block (ram,0x004a00dd) */
/* WARNING: Removing unreachable block (ram,0x004a00c9) */
/* WARNING: Removing unreachable block (ram,0x004a00d9) */
/* WARNING: Removing unreachable block (ram,0x0049ffb5) */
/* WARNING: Removing unreachable block (ram,0x004a0009) */
/* WARNING: Removing unreachable block (ram,0x0049ffce) */
/* WARNING: Removing unreachable block (ram,0x0049fff4) */
/* WARNING: Removing unreachable block (ram,0x0049ffd7) */
/* WARNING: Removing unreachable block (ram,0x004a0011) */
/* WARNING: Removing unreachable block (ram,0x004a0048) */
/* WARNING: Removing unreachable block (ram,0x004a0050) */
/* WARNING: Removing unreachable block (ram,0x004a0060) */
/* WARNING: Removing unreachable block (ram,0x004a0064) */
/* WARNING: Removing unreachable block (ram,0x004a006b) */
/* WARNING: Removing unreachable block (ram,0x004a007b) */
/* WARNING: Removing unreachable block (ram,0x004a0097) */
/* WARNING: Removing unreachable block (ram,0x004a009e) */

undefined4 * FUN_0049fed0(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006426c8;
  local_c = ExceptionList;
  if ((uint)((param_3[1] - *param_3) / 0xc) < 2) {
    ExceptionList = &local_c;
    FUN_00455dc0(param_2 + 0x48);
    FUN_004b4cb0(param_1,param_2);
  }
  else {
    local_4 = 0;
    ExceptionList = &local_c;
    iVar1 = FUN_00491cd0(param_2);
    if (iVar1 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      ExceptionList = local_c;
      return param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = local_c;
  return param_1;
}

