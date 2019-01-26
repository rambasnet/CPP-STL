# STL Notebooks

# C++ STL and Algorithm Libraries on Jupyter Notebooks

## Requirements
- Jupyter Notebook
- xeus-cling notebook kernel
- git

## Install required tools
- Install Miniconda: https://conda.io/miniconda.html
- open a terminal and run the following commands
```
    conda install notebook
    conda install -c conda-forge xeus-cling
    conda install -c conda-forge jupyter_contrib_nbextensions
    conda install -c conda-forge jupyter_nbextensions_configurator
    jupyter nbextensions_configurator enable --user
```

## Run notebooks
- open a terminal and cd into this cloned repo and run jupyter notebook
```
    cd <stlnotebooks folder>
    jupyter notebook
```