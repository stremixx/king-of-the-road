
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00614a10(int *param_1,float param_2,float param_3,undefined4 *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  float local_6c;
  float fStack_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = *(int *)(*param_1 + 4);
  if ((((param_2 < *(float *)(iVar1 + 0x9ccc)) && (*(float *)(iVar1 + 0x9cc8) < param_2)) &&
      (param_3 < *(float *)(iVar1 + 0x9cd0))) && (*(float *)(iVar1 + 0x9cd4) < param_3)) {
    fVar2 = (param_2 - *(float *)(iVar1 + 0x9cc8)) / *(float *)(iVar1 + 0x9cd8);
    fVar3 = (param_3 - *(float *)(iVar1 + 0x9cd4)) / *(float *)(iVar1 + 0x9cdc);
    FUN_0061e749((double)(fVar2 / _DAT_00652230));
    uVar4 = __ftol();
    FUN_0061e749((double)(fVar3 / _DAT_00652234));
    fVar5 = (float)__ftol();
    FUN_0061f447((double)(fVar2 / _DAT_00652230));
    uVar6 = __ftol();
    FUN_0061f447((double)(fVar3 / _DAT_00652234));
    uVar7 = __ftol();
    fStack_68 = 0.0;
    uVar11 = CONCAT44(&local_60,fVar5);
    fVar2 = (fVar2 - (float)uVar4) / _DAT_00652230;
    fVar3 = (fVar3 - (float)(uint)fVar5) / _DAT_00652234;
    uVar10 = uVar4;
    local_6c = fVar5;
    FUN_00608170(uVar4,fVar5);
    FUN_00608560(uVar10,uVar11);
    uVar11 = CONCAT44(&local_54,fVar5);
    uVar8 = uVar6;
    FUN_00608170(uVar6,fVar5);
    FUN_00608560(uVar8,uVar11);
    uVar11 = CONCAT44(local_3c,uVar7);
    FUN_00608170(uVar4,uVar7);
    FUN_00608560(uVar4,uVar11);
    uVar11 = CONCAT44(local_24,uVar7);
    FUN_00608170(uVar6,uVar7);
    FUN_00608560(uVar6,uVar11);
    FUN_0041ce10(local_54 - local_60,local_50 - local_5c,local_4c - local_58);
    FUN_0041ce10(local_6c * fVar2,fStack_68 * fVar2,local_64 * fVar2);
    FUN_0041ce10(local_48 + local_60,local_44 + local_5c,local_40 + local_58);
    uVar8 = FUN_004be230(&local_48,local_24,local_3c,fVar2);
    uVar8 = FUN_004c03a0(&local_6c,uVar8);
    FUN_004bfef0(local_18,local_3c,uVar8);
    uVar8 = FUN_004be230(&local_48,local_18,local_30,fVar3);
    uVar8 = FUN_004c03a0(&local_6c,uVar8);
    puVar9 = (undefined4 *)FUN_004bfef0(local_c,local_30,uVar8);
    *param_4 = *puVar9;
    param_4[1] = puVar9[1];
    param_4[2] = puVar9[2];
    return;
  }
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0x3f800000;
  return;
}

