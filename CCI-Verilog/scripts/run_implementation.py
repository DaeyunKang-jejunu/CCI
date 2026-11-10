#!/usr/bin/env python3
"""Compatibility entry point for active ACE/rCCI implementation evidence."""
import subprocess
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
raise SystemExit(subprocess.run(
    ['python3','scripts/run_ace_implementation.py','--jobs','2'],cwd=ROOT).returncode)
