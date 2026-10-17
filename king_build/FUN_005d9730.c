
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005d9730(int *param_1)

{
  if (param_1[0x7a] != 0) {
    FUN_005b6580();
    _DAT_0071e768 = 0;
    _DAT_0071e76c = 0;
    _DAT_0071e758 = 0;
    _DAT_0071e75c = 0;
    _DAT_0071ef80 = 0;
    _DAT_0071ef84 = 0;
    *(undefined4 *)(param_1[0x74] + 0x2104) = *(undefined4 *)(param_1[0x75] + 0x94);
    *(int *)(param_1[0x75] + 0x94) = *(int *)(param_1[0x75] + 0x94) + 1;
    FUN_005b5830();
    FUN_005ae0c0(0xffffffff);
    (**(code **)(*param_1 + 0x68))();
    (**(code **)(*param_1 + 100))();
    (**(code **)(*param_1 + 0x6c))();
    FUN_005ae160();
    FUN_005b5840();
    *(double *)(param_1 + 0x7c) = (double)CONCAT44(_DAT_0071e76c,_DAT_0071e768) * _DAT_0064a648;
    *(double *)(param_1 + 0x7e) = (double)CONCAT44(_DAT_0071e75c,_DAT_0071e758) * _DAT_0064a648;
    *(double *)(param_1 + 0x80) = (double)CONCAT44(_DAT_0071ef84,_DAT_0071ef80) * _DAT_0064a648;
  }
  return;
}

