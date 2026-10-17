
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00580b10(int param_1,undefined4 *param_2,undefined1 *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 local_334 [12];
  undefined1 local_328 [300];
  undefined1 local_1fc [504];
  
  iVar3 = FUN_004e2140(param_2,0x41200000);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x1ac) = *param_2;
    *(undefined4 *)(param_1 + 0x1b0) = param_2[1];
    fVar5 = (float)param_2[2];
  }
  else {
    if (DAT_006d0fd8 == 0) {
      FUN_0061c369();
    }
    else {
      FUN_0061c369(local_328,s__s_mass__f_room__s_pos__6_3f__6__0067c468,
                   *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + 0x40) + 0xc),
                   (double)*(float *)(param_1 + 0x18c),
                   *(undefined4 *)(*(int *)(param_1 + 800) + 0xc),
                   (double)*(float *)(param_1 + 0x218),(double)*(float *)(param_1 + 0x21c),
                   (double)*(float *)(param_1 + 0x220),&DAT_00695c1c,(double)_DAT_00695954,
                   (double)_DAT_00695958,(double)_DAT_0069595c);
    }
    if (param_3 == (undefined1 *)0x0) {
      puVar6 = &DAT_0068c120;
      param_3 = &DAT_0068c120;
    }
    else {
      puVar6 = &DAT_0066b4e4;
    }
    uVar9 = CONCAT44(local_328,puVar6);
    puVar7 = local_1fc;
    uVar8 = CONCAT44(param_3,s__MovingItem__set_iW__s__s_0067c4b8);
    FUN_0061c369();
    iVar3 = FUN_004e2140(param_2,0x461c4000,puVar7,uVar8,uVar9);
    if (iVar3 != 0) {
      FUN_004e20b1();
      goto LAB_00580cdd;
    }
    pfVar4 = (float *)FUN_005aaad0(local_334,param_2);
    fVar1 = pfVar4[1] * _DAT_0064b440;
    fVar5 = pfVar4[2] * _DAT_0064b440;
    *(float *)(param_1 + 0x1ac) = *pfVar4 * _DAT_0064b440;
    *(float *)(param_1 + 0x1b0) = fVar1;
  }
  *(float *)(param_1 + 0x1b4) = fVar5;
LAB_00580cdd:
  pfVar4 = (float *)FUN_004e2984();
  fVar5 = *(float *)(param_1 + 500) * *pfVar4 +
          *(float *)(param_1 + 0x200) * pfVar4[1] + *(float *)(param_1 + 0x20c) * pfVar4[2];
  fVar1 = *(float *)(param_1 + 0x1f8) * *pfVar4 +
          *(float *)(param_1 + 0x204) * pfVar4[1] + *(float *)(param_1 + 0x210) * pfVar4[2];
  fVar2 = *(float *)(param_1 + 0x1fc) * *pfVar4 +
          *(float *)(param_1 + 0x208) * pfVar4[1] + *(float *)(param_1 + 0x214) * pfVar4[2];
  *(float *)(param_1 + 0x1b8) = fVar5;
  *(float *)(param_1 + 0x1bc) = fVar1;
  *(float *)(param_1 + 0x1c0) = fVar2;
  *(undefined4 *)(param_1 + 0xcf0) = *(undefined4 *)(param_1 + 0x1ac);
  *(float *)(param_1 + 0xcfc) = fVar5;
  *(undefined4 *)(param_1 + 0xcf4) = *(undefined4 *)(param_1 + 0x1b0);
  *(float *)(param_1 + 0xd00) = fVar1;
  *(undefined4 *)(param_1 + 0xcf8) = *(undefined4 *)(param_1 + 0x1b4);
  *(float *)(param_1 + 0xd04) = fVar2;
  return;
}

