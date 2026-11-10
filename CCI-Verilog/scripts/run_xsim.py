#!/usr/bin/env python3
"""Run the active ACE/rCCI regression with the optional Vivado XSim cross-check."""
import argparse
import subprocess
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--bin',default=r'D:\Vivado\2024.1\bin')
    args=parser.parse_args()
    raise SystemExit(subprocess.run(
        ['python3','scripts/run_ace.py','--xsim','--windows-bin',args.bin],cwd=ROOT).returncode)

if __name__=='__main__': main()
