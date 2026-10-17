
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0051fee0(int param_1,undefined4 param_2)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  char cVar7;
  undefined4 extraout_ECX;
  float10 fVar8;
  float10 fVar9;
  int *local_84;
  undefined8 local_80;
  char local_5c [8];
  char *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined1 local_38 [52];
  
  local_80 = (double)CONCAT44(0x51fef3,(undefined1 *)local_80);
  uVar2 = FUN_00568e10();
  local_48 = DAT_006cdc74 + 0x28;
  local_80 = (double)CONCAT44(0x51ff22,(undefined1 *)local_80);
  local_40 = __ftol();
  local_44 = DAT_006cdc78 + 0x285;
  local_3c = DAT_006cdc78 + 0x28e;
  local_80 = (double)CONCAT44(param_2,0x51ff48);
  FUN_005bf6e0();
  local_84 = &local_48;
  local_80 = 2.47032822920623e-323;
  FUN_005b6640(*(undefined4 *)(param_1 + -0x34));
  local_80 = (double)CONCAT44(local_38,0x51ff75);
  iVar3 = FUN_0057d570();
  local_54 = *(char **)(iVar3 + 0x24);
  local_50 = *(undefined4 *)(iVar3 + 0x28);
  local_4c = *(undefined4 *)(iVar3 + 0x2c);
  local_84 = *(int **)(iVar3 + 0x24);
  local_80 = *(double *)(iVar3 + 0x28);
  FUN_004333c0();
  local_80 = (double)CONCAT44(0x51ffb8,(undefined1 *)local_80);
  uVar4 = __ftol();
  local_80 = (double)CONCAT44(0x51ffcf,(undefined1 *)local_80);
  uVar5 = __ftol();
  local_80 = (double)CONCAT44(uVar5,uVar4);
  local_84 = (int *)s__04d__01d_0067696c;
  FUN_0061c369(local_5c);
  if (local_5c[0] != '\0') {
    pcVar6 = local_5c;
    cVar7 = local_5c[0];
    do {
      *pcVar6 = cVar7 + -0x80;
      cVar7 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
    } while (cVar7 != '\0');
  }
  local_80 = (double)CONCAT44(local_5c,0x52000a);
  iVar3 = FUN_005e9710();
  local_84 = (int *)local_5c;
  local_80 = 0.0;
  FUN_005e97a0(*(undefined4 *)(param_1 + -0x34),(DAT_006cdc74 - iVar3) + 0xb0,DAT_006cdc78 + 0x1ed,
               uVar2);
  local_80 = (double)CONCAT44(0x520049,(undefined1 *)local_80);
  uVar4 = __ftol();
  local_80 = (double)CONCAT44(0x520060,(undefined1 *)local_80);
  uVar5 = __ftol();
  local_80 = (double)CONCAT44(uVar5,uVar4);
  local_84 = (int *)s__04d__01d_0067696c;
  FUN_0061c369(local_5c);
  if (local_5c[0] != '\0') {
    pcVar6 = local_5c;
    cVar7 = local_5c[0];
    do {
      *pcVar6 = cVar7 + -0x80;
      cVar7 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
    } while (cVar7 != '\0');
  }
  local_80 = (double)CONCAT44(local_5c,0x52009b);
  iVar3 = FUN_005e9710();
  local_84 = (int *)local_5c;
  local_80 = 0.0;
  FUN_005e97a0(*(undefined4 *)(param_1 + -0x34),(DAT_006cdc74 - iVar3) + 0xb0,DAT_006cdc78 + 0x21f,
               uVar2);
  local_84 = (int *)local_54;
  local_80 = (double)CONCAT44(local_4c,local_50);
  FUN_004333c0();
  local_80 = (double)CONCAT44(0x5200f2,(undefined1 *)local_80);
  uVar4 = __ftol();
  local_80 = (double)CONCAT44(0x520109,(undefined1 *)local_80);
  uVar5 = __ftol();
  local_80 = (double)CONCAT44(uVar5,uVar4);
  local_84 = (int *)s__04d__01d_0067696c;
  FUN_0061c369(local_5c);
  if (local_5c[0] != '\0') {
    pcVar6 = local_5c;
    do {
      *pcVar6 = local_5c[0] + -0x80;
      local_5c[0] = pcVar6[1];
      pcVar6 = pcVar6 + 1;
    } while (local_5c[0] != '\0');
  }
  local_80 = (double)CONCAT44(local_5c,0x520144);
  iVar3 = FUN_005e9710();
  local_84 = (int *)local_5c;
  local_80 = 0.0;
  FUN_005e97a0(*(undefined4 *)(param_1 + -0x34),(DAT_006cdc74 - iVar3) + 0xb0,DAT_006cdc78 + 0x251,
               uVar2);
  FUN_005e97a0(*(undefined4 *)(param_1 + -0x34),DAT_006cdc74 + 0x27,DAT_006cdc78 + 0x2a3,
               DAT_006cdc84,&DAT_00676968,0,0);
  local_80 = (double)CONCAT44(0x5201b0,(undefined1 *)local_80);
  iVar3 = __ftol();
  if (iVar3 < 10) {
    local_80 = (double)CONCAT44(iVar3,s__d_00676960);
  }
  else if (*(double *)(param_1 + 0x140) < _DAT_0064a690) {
    local_80 = (double)CONCAT44(iVar3,&DAT_00676958);
  }
  else if (*(double *)(param_1 + 0x140) < _DAT_0064a720) {
    local_80 = (double)CONCAT44(iVar3,&PTR_LAB_0066dfdc);
  }
  else {
    local_80 = (double)CONCAT44(iVar3,&DAT_0066b8cc);
  }
  local_84 = (int *)local_5c;
  FUN_0061c369();
  local_84 = (int *)local_5c;
  local_80 = 0.0;
  FUN_005e97a0(*(undefined4 *)(param_1 + -0x34),DAT_006cdc74 + 0x87,DAT_006cdc78 + 0x2a3,
               DAT_006cdc84);
  dVar1 = (double)(int)*(short *)(param_1 + 0x150) * *(double *)(param_1 + 0x140) * _DAT_0064a590 -
          *(double *)(param_1 + 0x138);
  if (_DAT_0064a668 < dVar1) {
    local_84 = (int *)s__3_2f_00676950;
    local_80 = dVar1;
    FUN_0061c369(local_5c);
    FUN_005e97a0(*(undefined4 *)(param_1 + -0x34),DAT_006cdc74 + 0x4b,DAT_006cdc78 + 0x2d4,
                 DAT_006cdc84,local_5c,0,0);
    local_84 = (int *)local_54;
    local_80 = (double)CONCAT44(local_4c,local_50);
    fVar8 = (float10)FUN_004333c0();
    local_80 = (double)(fVar8 * (float10)dVar1);
    local_84 = (int *)s__3_2f_00676950;
    FUN_0061c369(local_5c);
    FUN_005e97a0(*(undefined4 *)(param_1 + -0x34),DAT_006cdc74 + 0x9b,DAT_006cdc78 + 0x2d4,
                 DAT_006cdc84,local_5c,0,0);
  }
  if (_DAT_0064a668 < *(double *)(param_1 + 0x130)) {
    dVar1 = *(double *)(DAT_00695c00 + 0x2e4);
    fVar8 = (float10)_DAT_0064a770;
    *(double *)(param_1 + 0x130) =
         (double)((float10)*(double *)(param_1 + 0x130) - (float10)dVar1 * fVar8);
    fVar8 = (float10)dVar1 * fVar8 + (float10)*(double *)(param_1 + 0x148);
    *(double *)(param_1 + 0x148) = (double)fVar8;
    if (*(double *)(param_1 + 0x130) <= _DAT_0064a668) {
      fVar8 = fVar8 + (float10)*(double *)(param_1 + 0x130);
      *(double *)(param_1 + 0x148) = (double)fVar8;
      local_80 = (double)CONCAT44((float)(fVar8 + (float10)*(double *)(param_1 + 0x138)),0x5203bc);
      FUN_004eae80();
      local_80._0_4_ = (undefined1 *)((int)&local_80 + 4);
      local_84 = (int *)0x5203c3;
      local_80._4_4_ = extraout_ECX;
      FUN_00568670();
      local_80 = (double)CONCAT44(local_80._4_4_,0x5203cb);
      fVar8 = (float10)FUN_0043f840();
      local_84 = (int *)local_54;
      local_80 = (double)CONCAT44(local_4c,local_50);
      fVar9 = (float10)FUN_004333c0();
      local_80 = (double)((float10)(double)fVar8 - fVar9 * (float10)*(double *)(param_1 + 0x148));
      FUN_00568670(&local_84);
      FUN_0043f8a0();
      local_80 = (double)CONCAT44(0x52041a,(undefined1 *)local_80);
      (**(code **)(*(int *)(param_1 + -0x40) + 0x20))();
      local_80 = (double)CONCAT44(0x520425,(undefined1 *)local_80);
      (**(code **)(*DAT_00695c00 + 0x24))();
      *(undefined1 *)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) + 0x2700) = 2;
      local_80 = 2.12465141555056e-314;
      FUN_004e1230();
      return;
    }
  }
  return;
}

