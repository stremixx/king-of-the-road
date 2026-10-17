
void __fastcall FUN_004eed00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined1 local_c8 [200];
  
  fVar3 = -DAT_00701590;
  fVar5 = -DAT_00701594;
  fVar4 = -DAT_00701598;
  uVar1 = *(undefined4 *)(param_1 + 0xdd4);
  local_d4 = fVar3 * *(float *)(param_1 + 0x900) +
             fVar5 * *(float *)(param_1 + 0x90c) + fVar4 * *(float *)(param_1 + 0x918);
  local_d0 = fVar3 * *(float *)(param_1 + 0x904) +
             fVar5 * *(float *)(param_1 + 0x910) + fVar4 * *(float *)(param_1 + 0x91c);
  local_cc = fVar3 * *(float *)(param_1 + 0x908) +
             fVar5 * *(float *)(param_1 + 0x914) + fVar4 * *(float *)(param_1 + 0x920);
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
    iVar2 = *(int *)(param_1 + 0x8cc);
    iVar6 = iVar2 * 0x970;
    FUN_0061c369(local_c8,s_made_fsm__NUM_W__d_<3)_numberTec_00673604,uVar1,iVar2,
                 &DAT_0069706c + iVar6,&DAT_0069708a + iVar6,&DAT_006970a8 + iVar2 * 0x25c,
                 &DAT_006970ee + iVar6);
    FUN_004e1e9c(local_c8);
    return;
  case 3:
    FUN_004eea90(param_1 + 0x1cbc,param_1 + 0x2650);
    return;
  case 4:
    FUN_004eeac0(param_1 + 0x1cbc,param_1 + 0x2650);
    return;
  case 5:
    FUN_004eeb00(param_1 + 0x1cbc,param_1 + 0x2650);
    return;
  case 6:
    FUN_004eeb50(param_1 + 0x1cbc,param_1 + 0x2650);
    return;
  default:
    FUN_004eebb0(&local_d4,param_1 + 0x1844,param_1 + 0x2650,uVar1);
    return;
  }
}

