# -*- coding: utf-8 -*-

from setuptools import find_packages
from setuptools import setup

setup(
    name='aes',
    version='0.1.0',
    include_package_data=True,
    packages=find_packages(exclude=['tests*']) + ['aes'],
    zip_safe=False,
    license='MIT',
    description='AES',
    long_description=open('README.txt').read(),
    url='git@github.com:GincyAG/aes.git',
    author='Gincy',
    install_requires=[
    ],
)
