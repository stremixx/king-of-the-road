
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005e13d0(int param_1)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  undefined1 local_dc [20];
  undefined1 local_c8 [64];
  undefined1 auStack_88 [132];
  
  dVar1 = _DAT_007206f8;
  if ((((*(uint *)(param_1 + 0x124) & 0x20000000) != 0) && (*(int *)(param_1 + 0xfc) != 0)) &&
     (*(int *)(param_1 + 0x110) != 0)) {
    fVar7 = (float10)thunk_FUN_00603580();
    dVar1 = (double)fVar7;
    _DAT_007206f0 = (double)(fVar7 - (float10)(double)CONCAT44(_DAT_007206fc,_DAT_007206f8));
    iVar2 = *(int *)(param_1 + 0x104);
    iVar6 = iVar2 + -0x14;
    uVar3 = __ftol();
    FUN_0061c369(local_c8,&DAT_0066b8cc,uVar3);
    FUN_005e97a0(*(undefined4 *)(*(int *)(param_1 + 0xfc) + 0xc),0x32,iVar6,
                 *(undefined4 *)(param_1 + 0x110),local_c8,5,0);
    FUN_0061c369(local_c8,&DAT_0066b8cc,DAT_00701dfc);
    FUN_005e97a0(*(undefined4 *)(*(int *)(param_1 + 0xfc) + 0xc),100,iVar2 + -0xb,
                 *(undefined4 *)(param_1 + 0x110),local_c8,5,0);
    iVar4 = __ftol(7,0);
    FUN_005b7390(*(undefined4 *)(*(int *)(param_1 + 0xfc) + 0xc),iVar6,100,iVar4 + 100);
    iVar4 = __ftol(7,0);
    FUN_005b7390(*(undefined4 *)(*(int *)(param_1 + 0xfc) + 0xc),iVar2 + -0x15,100,iVar4 + 100);
    iVar4 = __ftol(7,0);
    FUN_005b7390(*(undefined4 *)(*(int *)(param_1 + 0xfc) + 0xc),iVar2 + -0x16,100,iVar4 + 100);
    uVar3 = __ftol(*(undefined4 *)(DAT_007206b0 + 0x100),*(undefined4 *)(DAT_007206b0 + 0x104));
    FUN_0061c369(local_c8,s__d_fps__d_xres__d_yres_00682048,uVar3);
    FUN_005e97a0(*(undefined4 *)(*(int *)(param_1 + 0xfc) + 0xc),0x32,iVar2 + -0x1e,
                 *(undefined4 *)(param_1 + 0x110),local_c8,7,0);
    if ((*(uint *)(param_1 + 0x124) & 0x30000000) == 0x30000000) {
      piVar5 = *(int **)(param_1 + 0xf0);
      while (piVar5 != (int *)0x0) {
        if (((*(byte *)(piVar5 + 4) & 1) != 0) && (piVar5 != *(int **)(param_1 + 0xfc))) {
          iVar6 = (**(code **)(*piVar5 + 0x40))(*(int **)(param_1 + 0xfc),iVar6 + -0x14);
        }
        piVar5 = (int *)FUN_005d2730();
      }
    }
  }
  if ((DAT_007206c0 != 0) && (DAT_007206b8 < 9999)) {
    _DAT_007206f8 = dVar1;
    FUN_0061c369(local_dc,&PTR_LAB_005c7323_2_00682034,s___F7DIR_00682040);
    FUN_006313e1(s___F7DIR_00682040);
    FUN_0061c369(auStack_88,s__sphoto_04d_tga_00682024,local_dc,DAT_007206b8);
    uVar3 = FUN_0061c356(auStack_88,&DAT_0066f3e4);
    FUN_005e9040(*(undefined4 *)(*(int *)(param_1 + 0xfc) + 0xc),uVar3);
    FUN_0061c25a(uVar3);
    DAT_007206b8 = DAT_007206b8 + 1;
    dVar1 = _DAT_007206f8;
  }
  _DAT_007206fc = (undefined4)((ulonglong)dVar1 >> 0x20);
  _DAT_007206f8 = SUB84(dVar1,0);
  return;
}

