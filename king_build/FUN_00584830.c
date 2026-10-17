
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00584830(int param_1,float *param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float10 fVar7;
  float10 fVar8;
  int local_160;
  int local_15c;
  float local_158;
  float local_154;
  float local_150;
  int local_14c;
  undefined4 *local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  double local_130;
  float local_128;
  float local_124;
  float local_11c;
  int local_118;
  int *local_114;
  int local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100 [4];
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
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
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  double local_a0;
  undefined1 local_98 [36];
  float local_74;
  float local_70;
  float local_6c;
  undefined1 local_68 [48];
  undefined1 local_38 [52];
  
  fVar7 = (float10)FUN_004e1fd9();
  local_15c = 0;
  fVar1 = *(float *)(param_1 + 0xd6c) * *param_2 +
          param_2[3] * *(float *)(param_1 + 0xd70) + param_2[6] * *(float *)(param_1 + 0xd74) +
          param_2[9];
  local_154 = param_2[4] * *(float *)(param_1 + 0xd70) +
              param_2[7] * *(float *)(param_1 + 0xd74) + param_2[1] * *(float *)(param_1 + 0xd6c) +
              param_2[10];
  local_150 = param_2[5] * *(float *)(param_1 + 0xd70) +
              param_2[8] * *(float *)(param_1 + 0xd74) + param_2[2] * *(float *)(param_1 + 0xd6c) +
              param_2[0xb];
  local_11c = (float)(fVar7 * (float10)*(float *)(param_1 + 0xd84) +
                      (float10)*(float *)(param_1 + 0xcc8) + (float10)_DAT_0064b3fc);
  local_158 = fVar1;
  uVar2 = FUN_0057d5d0();
  local_148 = (undefined4 *)FUN_0056eac0(uVar2,fVar1,local_154,local_150,local_11c,&local_15c);
  if (local_15c < 1) {
    return 0;
  }
  FUN_0057d570(local_98);
  FUN_0057d5a0(local_68);
  FUN_005ab130(local_38,local_68,param_2);
  FUN_005aba00(&local_d0,local_38);
  local_160 = 0;
  local_14c = 0;
  local_a0 = (double)(local_11c * local_11c);
  local_13c = 0;
  if (0 < local_15c) {
    do {
      iVar4 = local_13c;
      iVar3 = FUN_0056ed20(local_13c,&local_110,&local_118,&local_130,&local_114,&local_134,
                           &local_138);
      if (0 < iVar3) {
        local_144 = 0;
        local_140 = iVar3;
        do {
          pfVar5 = (float *)&DAT_00701550;
          pfVar6 = local_100;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pfVar6 = *pfVar5;
            pfVar5 = pfVar5 + 1;
            pfVar6 = pfVar6 + 1;
          }
          if (local_138 != 0) {
            FUN_005e1080(local_138,local_100);
          }
          pfVar5 = (float *)(local_144 + 8 + local_110);
          pfVar6 = (float *)(local_144 + 4 + local_110);
          fVar7 = (float10)local_f0 * (float10)*pfVar6 +
                  (float10)local_e4 * (float10)*(float *)(local_144 + 8 + local_110) +
                  (float10)local_100[1] * (float10)*(float *)(local_144 + local_110) +
                  (float10)local_d8;
          fVar8 = (float10)local_ec * (float10)*pfVar6 +
                  (float10)local_e0 * (float10)*pfVar5 +
                  (float10)local_100[2] * (float10)*(float *)(local_144 + local_110) +
                  (float10)local_d4;
          local_158 = local_100[3] * *pfVar6 +
                      local_e8 * *pfVar5 + local_100[0] * *(float *)(local_144 + local_110) +
                      local_dc;
          local_154 = (float)fVar7;
          local_150 = (float)fVar8;
          local_128 = local_158 - local_74;
          local_124 = (float)(fVar7 - (float10)local_70);
          if ((float10)local_130 * (float10)local_130 +
              (fVar8 - (float10)local_6c) * (fVar8 - (float10)local_6c) +
              (float10)local_124 * (float10)local_124 + (float10)local_128 * (float10)local_128 <=
              (float10)local_a0) {
            local_10c = (float)((float10)local_d0 * (float10)local_158 +
                                (float10)local_b8 * fVar8 + (float10)local_c4 * fVar7 +
                               (float10)local_ac);
            local_108 = (float)((float10)local_b4 * fVar8 +
                                (float10)local_c0 * fVar7 + (float10)local_cc * (float10)local_158 +
                               (float10)local_a8);
            local_104 = (float)((float10)local_b0 * fVar8 +
                                (float10)local_bc * fVar7 + (float10)local_c8 * (float10)local_158 +
                               (float10)local_a4);
            if (local_118 == 0) {
              iVar4 = FUN_00583f00(&local_158,&local_10c,param_3,param_1);
            }
            else {
              iVar4 = FUN_00584350(&local_158,&local_10c,(float)local_130,param_3,param_1,1);
            }
            if (iVar4 != 0) {
              if (local_134 != 0) {
                iVar3 = FUN_00587510((int)(short)*local_114,*local_114 >> 0x10,1,local_138,
                                     *local_148,param_3 + -0xc + *(int *)(param_3 + 0xb00) * 0xc,
                                     local_114 + 1);
                local_14c = local_14c + iVar3;
                local_160 = local_160 + iVar4;
                goto LAB_00584c2a;
              }
              FUN_00580f90(4);
            }
            local_160 = local_160 + iVar4;
          }
LAB_00584c2a:
          local_144 = local_144 + 0xc;
          local_140 = local_140 + -1;
        } while (local_140 != 0);
        local_140 = 0;
        iVar4 = local_13c;
      }
      local_13c = iVar4 + 1;
      local_148 = local_148 + 1;
    } while (local_13c < local_15c);
    if (local_14c != 0) {
      return -local_160;
    }
  }
  return local_160;
}

