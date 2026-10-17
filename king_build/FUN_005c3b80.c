
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_005c3b80(int *param_1,undefined4 param_2,int param_3,float param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 auStack_1a0 [4];
  undefined4 uStack_190;
  undefined1 *puStack_18c;
  double local_188;
  double local_180;
  double local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  float local_13c;
  undefined1 local_138 [4];
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  undefined1 local_104 [4];
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0 [7];
  undefined4 local_98 [12];
  undefined4 local_68 [12];
  undefined1 local_38 [52];
  
  puVar3 = local_98 + 2;
  iVar4 = 4;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar3 = &DAT_00701550;
  puVar5 = local_98;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_160 = (double)CONCAT44(&local_140,0x5c3bcf);
  iVar4 = FUN_006028c0();
  if (iVar4 == 0) {
    switch(local_140) {
    case 7:
      local_160 = (double)CONCAT44(local_104,&local_134);
      local_168 = (double)CONCAT44(&local_148,0x5c3c0c);
      iVar4 = FUN_00602ad0();
      if (iVar4 == 0) {
        if (param_3 != 0) {
          puVar3 = local_68 + 2;
          iVar4 = 4;
          do {
            puVar3[-2] = 0;
            puVar3[-1] = 0;
            *puVar3 = 0;
            puVar3 = puVar3 + 3;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          puVar3 = &DAT_00701550;
          puVar5 = local_68;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar5 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar5 = puVar5 + 1;
          }
          local_160 = (double)CONCAT44(local_148,0x5c3c5e);
          iVar4 = FUN_005c2900();
          if (iVar4 == 0) {
            return 1;
          }
          local_160 = (double)CONCAT44(local_68,0x5c3c7f);
          FUN_005f1c30();
          local_160 = (double)CONCAT44(&local_e0,&local_d8);
          local_168 = (double)CONCAT44(local_d0,&local_e8);
          local_170 = (double)CONCAT44(&local_f0,&local_f8);
          puVar3 = local_68;
          puVar5 = auStack_1a0;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar5 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar5 = puVar5 + 1;
          }
          FUN_005de000();
          fVar1 = _DAT_0064b240 - param_4;
          local_134 = local_134 * param_4 + fVar1 * (float)local_f8;
          local_130 = local_130 * param_4 + fVar1 * (float)local_f0;
          local_12c = local_12c * param_4 + fVar1 * (float)local_e8;
          fVar1 = local_128 - (float)local_e0;
          if ((float)_DAT_0064c8f0 < fVar1) {
            fVar1 = (float)_DAT_0064c8f8 - fVar1;
          }
          if (fVar1 < (float)_DAT_0064c900) {
            fVar1 = (float)_DAT_00650670 - fVar1;
          }
          local_128 = fVar1 * param_4 + local_128;
          fVar1 = local_124 - (float)local_d8;
          if ((float)_DAT_0064c8f0 < fVar1) {
            fVar1 = (float)_DAT_0064c8f8 - fVar1;
          }
          if (fVar1 < (float)_DAT_0064c900) {
            fVar1 = (float)_DAT_00650670 - fVar1;
          }
          local_124 = fVar1 * param_4 + local_124;
          fVar1 = local_120 - (float)local_d0[0];
          if ((float)_DAT_0064c8f0 < fVar1) {
            fVar1 = (float)_DAT_0064c8f8 - fVar1;
          }
          if (fVar1 < (float)_DAT_0064c900) {
            fVar1 = (float)_DAT_00650670 - fVar1;
          }
          local_120 = fVar1 * param_4 + local_120;
        }
        puStack_18c = local_38;
        local_160 = (double)local_128;
        local_168 = (double)local_124;
        local_170 = (double)local_120;
        local_178 = (double)local_12c;
        local_180 = (double)local_130;
        local_188 = (double)local_134;
        uStack_190 = 0x5c3df8;
        puVar3 = (undefined4 *)FUN_005da010();
        local_160 = (double)CONCAT44(0x30,local_98);
        uVar2 = 1;
        puVar5 = local_98;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        }
LAB_005c3e94:
        local_168 = (double)CONCAT44(uVar2,local_148);
        local_170 = (double)CONCAT44(0x5c3ea4,(undefined4)local_170);
        iVar4 = FUN_005c2880();
        return iVar4;
      }
      break;
    case 0x2a:
      local_160 = (double)CONCAT44(&local_13c,&local_148);
      local_168 = (double)CONCAT44(0x5c3ebe,(undefined4)local_168);
      iVar4 = FUN_00602b40();
      local_100 = (double)local_13c;
      if (iVar4 == 0) {
        local_160 = (double)CONCAT44(8,&local_100);
        local_168 = (double)CONCAT44(4,local_148);
        local_170 = (double)CONCAT44(0x5c3ee3,(undefined4)local_170);
        iVar4 = FUN_005c2880();
        return iVar4;
      }
      break;
    case 0x2d:
      local_160 = (double)CONCAT44(local_138,&local_148);
      local_168 = (double)CONCAT44(0x5c3e2a,(undefined4)local_168);
      iVar4 = FUN_00602b80();
      if (iVar4 == 0) {
        if (param_1[0x7bf] != 0) {
          local_160 = (double)CONCAT44(local_148,0x5c3e4c);
          iVar4 = FUN_005c2840();
          if ((iVar4 != 0) && (*(int *)(iVar4 + 0x10) == 2)) {
            if (*(int *)(iVar4 + 0x14) != 0) {
              local_160 = (double)CONCAT44(*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x158),0x5c3e71)
              ;
              iVar4 = FUN_005e4980();
              if (iVar4 != 0) {
                local_160 = (double)CONCAT44(param_1 + 0xb0,0x5c3e7d);
                FUN_005e3fe0();
              }
            }
            return 1;
          }
        }
        local_160 = (double)CONCAT44(4,local_138);
        uVar2 = 3;
        goto LAB_005c3e94;
      }
      break;
    case 0x78:
      local_160 = (double)CONCAT44(&local_144,&DAT_00701f18);
      local_168 = (double)CONCAT44(&local_148,0x5c3f02);
      iVar4 = FUN_00602bc0();
      if (iVar4 == 0) {
        local_160 = (double)CONCAT44(local_144,&DAT_00701f18);
        local_168 = (double)CONCAT44(6,local_148);
        local_170 = (double)CONCAT44(0x5c3f22,(undefined4)local_170);
        iVar4 = FUN_005c2880();
        if (iVar4 != 0) {
          return iVar4;
        }
        local_160 = (double)CONCAT44(local_144,&DAT_00701f18);
        local_168 = (double)CONCAT44(local_148,0x5c3f3f);
        iVar4 = (**(code **)(*param_1 + 0xd4))();
        return iVar4;
      }
    }
  }
  return 0;
}

