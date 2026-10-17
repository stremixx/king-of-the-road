
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00580980(int param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  float10 fVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar7;
  undefined8 uVar6;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 local_328 [300];
  undefined1 local_1fc [504];
  
  puVar1 = (undefined4 *)(param_1 + 0x1a0);
  *puVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x1a4) = param_2[1];
  *(undefined4 *)(param_1 + 0x1a8) = param_2[2];
  if (DAT_006d0fd8 == 0) {
    FUN_0061c369();
  }
  else {
    FUN_0061c369(local_328,s__s_mass__f_room__s_pos__6_3f__6__0067c468,
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + 0x40) + 0xc),
                 (double)*(float *)(param_1 + 0x18c),*(undefined4 *)(*(int *)(param_1 + 800) + 0xc),
                 (double)*(float *)(param_1 + 0x218),(double)*(float *)(param_1 + 0x21c),
                 (double)*(float *)(param_1 + 0x220),&DAT_00695c1c,(double)_DAT_00695954,
                 (double)_DAT_00695958,(double)_DAT_0069595c);
  }
  if (param_3 == (undefined1 *)0x0) {
    puVar2 = &DAT_0068c120;
    param_3 = &DAT_0068c120;
  }
  else {
    puVar2 = &DAT_0066b4e4;
  }
  uVar9 = CONCAT44(local_328,puVar2);
  puVar7 = local_1fc;
  uVar8 = CONCAT44(param_3,s__s_s__MovingItem__set_V__s_0067c418);
  FUN_0061c369();
  puVar5 = local_1fc;
  uVar6 = CONCAT44(puVar7,0x43160000);
  puVar4 = puVar1;
  FUN_004e20b1();
  *(undefined4 *)(param_1 + 0xce4) = *puVar1;
  *(undefined4 *)(param_1 + 0xce8) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(param_1 + 0xcec) = *(undefined4 *)(param_1 + 0x1a8);
  fVar3 = (float10)FUN_005aabc0(puVar1,puVar4,puVar5,uVar6,uVar8,uVar9);
  *(float *)(param_1 + 0x378) = (float)fVar3;
  *(float *)(param_1 + 0xd84) = (float)fVar3;
  return;
}

