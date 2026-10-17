
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005800e0(int *param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  float10 fVar9;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60 [12];
  undefined1 local_30 [48];
  
  piVar7 = param_1 + 0x319;
  piVar8 = local_60;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar8 = piVar8 + 1;
  }
  FUN_005aba00(local_30,local_60);
  fVar1 = (float)param_1[0x331];
  local_c0 = (float)param_1[0x68];
  local_bc = (float)param_1[0x69];
  local_dc = 0.0;
  local_6c = param_1[0x6b];
  local_b8 = (float)param_1[0x6a];
  local_68 = param_1[0x6c];
  local_64 = param_1[0x6d];
  local_d8 = 0.0;
  local_78 = param_1[0x336];
  local_74 = param_1[0x337];
  local_70 = param_1[0x338];
  local_d4 = 0.0;
  local_b4 = 0;
  local_b0 = 0;
  local_ac = 0;
  FUN_004e73dd(param_2,param_3,local_60,local_30,fVar1,param_1[0x165],0x3f800000,&local_c0,&local_6c
               ,&local_78,&local_dc,&local_b4);
  fVar2 = ABS((local_d8 - local_bc) * param_3[1] +
              (local_dc - local_c0) * *param_3 + (local_d4 - local_b8) * param_3[2]) * fVar1;
  local_c4 = param_3[1] * local_d8 + *param_3 * local_dc + param_3[2] * local_d4;
  fVar3 = local_d4 * param_3[1] - local_d8 * param_3[2];
  fVar5 = local_dc * param_3[2] - local_d4 * *param_3;
  fVar4 = local_d8 * *param_3 - local_dc * param_3[1];
  local_d0 = fVar5 * param_3[2] - fVar4 * param_3[1];
  local_cc = fVar4 * *param_3 - fVar3 * param_3[2];
  local_c8 = fVar3 * param_3[1] - fVar5 * *param_3;
  local_a8 = local_d0;
  local_a4 = local_cc;
  local_a0 = local_c8;
  fVar9 = (float10)FUN_005aabc0(&local_a8);
  fVar9 = fVar9 - (float10)((fVar2 + fVar2) / fVar1);
  local_e0 = (float)fVar9;
  if (fVar9 < (float10)_DAT_0064b254) {
    local_e0 = 0.0;
  }
  FUN_005aaad0(&local_9c,&local_a8);
  local_8c = local_98 * local_e0;
  local_88 = local_94 * local_e0;
  local_80 = local_c4 * param_3[1];
  local_7c = local_c4 * param_3[2];
  local_dc = local_c4 * *param_3 + local_9c * local_e0;
  local_d8 = local_8c + local_80;
  local_d4 = local_88 + local_7c;
  local_d0 = local_dc;
  local_cc = local_d8;
  local_c8 = local_d4;
  (**(code **)(*param_1 + 0x90))(&local_dc,s_perform_mi_wall_smooth_collision_0067c3b0);
  (**(code **)(*param_1 + 0x94))(&local_bc,s_mi_wall_smooth_col_2_0067c398);
  return;
}

