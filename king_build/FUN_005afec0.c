
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_005afec0(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  int iStack_70;
  int iStack_14;
  int iStack_10;
  
  uVar3 = *(uint *)(param_2 + 0x20);
  while (((uVar3 & 0x80000) != 0 && (DAT_0071f824 == 0))) {
    if (DAT_0071f81c == 0) {
      return (int *)0x0;
    }
    iVar4 = *(int *)(param_2 + 0x2c);
    if (iVar4 < 0) {
      return (int *)0x0;
    }
    if ((uVar3 & 0x20000) != 0) {
      return (int *)0x0;
    }
    param_2 = *(int *)(param_1 + 0x2044) + iVar4 * 0x7c;
    uVar3 = *(uint *)(*(int *)(param_1 + 0x2044) + 0x20 + iVar4 * 0x7c);
  }
  if (DAT_0071f834 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 0x30);
  }
  uVar3 = -(uint)(DAT_0071f834 != 0) & param_4;
  if ((param_4 == 0) || (*(int *)(param_1 + 0x2038) < iVar4)) {
    *(int *)(param_1 + 0x2038) = iVar4;
  }
  if ((*(uint *)(param_2 + 0x20) & 1) == 0) {
    (**(code **)(*DAT_0071f868 + 0x8c))(DAT_0071f868,0,0);
    (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,0,1,1);
    (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,0,4,1);
    return (int *)0x0;
  }
  piVar10 = DAT_0071f868;
  uVar11 = uVar3;
  (**(code **)(*DAT_0071f868 + 0x8c))
            (DAT_0071f868,uVar3,*(undefined4 *)(*(int *)(param_2 + 0x4c) + 0x4c));
  (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,0xb,iVar4);
  piVar7 = DAT_0071f868;
  if (((*(uint *)(param_2 + 0x20) & 0x2000) != 0) && (DAT_0071f82c != 0)) {
    iVar4 = *DAT_0071f868;
    iVar2 = __ftol();
    (**(code **)(iVar4 + 0x50))(piVar7,0x3c,iVar2 << 0x18);
  }
  piVar7 = *(int **)(*(int *)(param_2 + 0x4c) + 0x48);
  if (piVar7 == (int *)0x0) {
    FUN_0061c369(&stack0xffffff64,s_CMAT_ddsf__NULL__s__0067df84,param_2);
    FUN_005d2250(&stack0xffffff64,0);
  }
  else {
    iVar4 = (**(code **)(*piVar7 + 0x60))(piVar7);
    if (iVar4 == -0x7789fe3e) {
      FUN_005bb2a0(0,0x3ff00000);
    }
  }
  if (((iStack_14 != 0) && (*(int *)(param_2 + 0x20) == *(int *)(iStack_14 + 0x20))) &&
     (*(int *)(*(int *)(param_2 + 0x4c) + 0x34) == *(int *)(*(int *)(iStack_14 + 0x4c) + 0x34)))
  goto LAB_005b056b;
  if (iStack_10 == 0) {
    (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,2,2);
    (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,3,0);
    (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,1,4);
    DAT_00701de4 = iStack_10;
    if ((*(uint *)(param_2 + 0x20) & 0x4000) == 0) {
      if ((*(uint *)(param_2 + 0x20) & 2) == 0) {
        (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,5,2);
        uVar9 = 0;
        iVar4 = *DAT_0071f868;
LAB_005b01d1:
        (**(code **)(iVar4 + 0x94))(DAT_0071f868,uVar3,6,uVar9);
        uVar9 = 4;
        iVar4 = *DAT_0071f868;
        goto LAB_005b046e;
      }
      (**(code **)(*DAT_0071f868 + 0x94))();
      (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,4,2);
    }
    else {
      if ((DAT_0071f834 != 0) && ((DAT_00701dec & 0x1000000) != 0)) {
        DAT_00701de4 = 1;
        uVar9 = 2;
        iVar4 = *DAT_0071f868;
LAB_005b045c:
        (**(code **)(iVar4 + 0x94))(DAT_0071f868,uVar3,5,uVar9);
        goto LAB_005b0465;
      }
      (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,5,2);
      (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,6,0);
      (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,4,4);
    }
  }
  else {
    if ((*(uint *)(param_2 + 0x20) & 0x40) == 0) {
      if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0) {
        (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,2,2);
        (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,3,1);
        (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,1,0x16);
        piVar7 = DAT_0071f868;
        uVar8 = uVar3;
        (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,5,1);
        (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,4,2);
        fVar5 = (float10)*(double *)(uVar8 + 0x2128) * (float10)_DAT_0064ea28;
        fsin(fVar5);
        fVar5 = (float10)fcos(fVar5);
        fVar1 = (float)(fVar5 * (float10)_DAT_00650740);
        fVar6 = fVar1;
        (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,7,fVar1);
        (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,8,piVar7);
        (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,9,fVar6);
        (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,10,fVar1);
        iStack_10 = iStack_70;
        goto LAB_005b0478;
      }
      if (DAT_0071f834 == 0) {
        iVar4 = *DAT_0071f868;
        goto LAB_005b0421;
      }
      (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,2,2);
      (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,3,1);
      if (DAT_00701de4 == 0) {
        if ((((*(uint *)(param_2 + 0x20) & 0x2000) == 0) || (DAT_0071f82c == 0)) &&
           (*(int *)(*(int *)(param_2 + 0x4c) + 0x40) == 5)) {
          (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,1,0xd);
        }
        else {
          (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,1,0xe);
        }
      }
      else {
        (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,1,0x10);
      }
      if (*(int *)(param_2 + 0x40) == 3) {
        (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,1,2);
      }
      if (DAT_0071f828 != 0) {
        (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,6,DAT_00701de4 == 0);
        (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,4,3);
        goto LAB_005b0478;
      }
      (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,5,DAT_00701de4 == 0);
    }
    else {
      iVar4 = *DAT_0071f868;
      if (DAT_0071f81c != 0) {
        (**(code **)(iVar4 + 0x94))();
        (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,3,1);
        (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,1,4);
        if (*(int *)(*(int *)(param_2 + 0x4c) + 0x40) == 5) {
          (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,5,2);
          uVar9 = 1;
          iVar4 = *DAT_0071f868;
          goto LAB_005b01d1;
        }
        uVar9 = 1;
        iVar4 = *DAT_0071f868;
        if (DAT_0071f828 == 0) goto LAB_005b045c;
        (**(code **)(iVar4 + 0x94))(DAT_0071f868,uVar3,6,1);
        uVar9 = 3;
        iVar4 = *DAT_0071f868;
        goto LAB_005b046e;
      }
LAB_005b0421:
      (**(code **)(iVar4 + 0x94))(DAT_0071f868,uVar3,2,2);
      (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,1,2);
      if (*(int *)(*(int *)(param_2 + 0x4c) + 0x40) != 5) {
        iVar4 = *DAT_0071f868;
        uVar9 = 3;
        goto LAB_005b045c;
      }
      (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,5,2);
    }
LAB_005b0465:
    uVar9 = 2;
    iVar4 = *DAT_0071f868;
LAB_005b046e:
    (**(code **)(iVar4 + 0x94))(DAT_0071f868,uVar3,4,uVar9);
  }
LAB_005b0478:
  if (((*(uint *)(*(int *)(param_2 + 0x4c) + 0x34) & 0x100) == 0) &&
     ((*(uint *)(param_2 + 0x20) & 0x200) == 0)) {
    (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,0xc,1);
  }
  else {
    (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,0xc,3);
  }
  if (((*(byte *)(*(int *)(param_2 + 0x4c) + 0x34) & 8) == 0) || ((DAT_00701dec & 0x4000000) != 0))
  {
    (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,0x10,2);
    (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,0x11,2);
    if (DAT_0071f820 != 0) {
      iVar4 = *(int *)(*(int *)(param_2 + 0x4c) + 0x44);
      goto joined_r0x005b0538;
    }
  }
  else {
    (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,0x10,1);
    (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,0x11,1);
    if (DAT_0071f820 != 0) {
      iVar4 = *(int *)(*(int *)(param_2 + 0x4c) + 0x44);
joined_r0x005b0538:
      if (1 < iVar4) {
        (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,0x12,3);
        goto LAB_005b056b;
      }
    }
  }
  (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,uVar3,0x12,2);
LAB_005b056b:
  iVar4 = iStack_10 + 1;
  if (DAT_0071f834 == 0) {
    piVar10 = DAT_0071f868;
    (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,1,1,1);
    (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,1,4,1);
    return piVar10;
  }
  if (((*(uint *)(param_2 + 0x20) & 0x4000) == 0) || ((DAT_00701dec & 0x1000000) != 0)) {
    if (7 < iVar4) {
      return piVar10;
    }
    if ((iStack_14 == 0) || (*(int *)(iStack_14 + 0x2c) < 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(uVar11 + 0x2044) + *(int *)(iStack_14 + 0x2c) * 0x7c;
    }
    if ((-1 < *(int *)(param_2 + 0x2c)) && ((*(uint *)(param_2 + 0x20) & 0x20000) == 0)) {
      uVar3 = FUN_005afec0(*(int *)(uVar11 + 0x2044) + *(int *)(param_2 + 0x2c) * 0x7c,iVar2,iVar4);
      return (int *)(uVar3 | (uint)piVar10);
    }
  }
  piVar10 = DAT_0071f868;
  (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,iVar4,1,1);
  (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,iVar4,4,1);
  return piVar10;
}

