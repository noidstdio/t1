# Project Structure
``art`` stores all art related assets.

``assets`` stores all assets for the project.

``audio`` stores all audio assets for the project.

``build`` stores built game files.

``db`` stores database files for built games.

``docs`` stores documentation related files.

``shared`` stores shared source code and resources.

``src`` stores source code for the project.

``temp`` stores temporary files, like objects and pipeline related things.

# Code / Naming Styleguide
- Use namespaces to encapsolate code, for example, game code in a ``Game`` namespace, core code in ``Core`` namespace, particle library code in ``Particle``, etc, etc.
- Use ``PascalCase`` for function naming, namespace naming, and variable naming, all of that good stuff.
- Use ``kebab-case`` for asset naming, code file naming, like for game assets etc. Chosen because of readability, and ease of use to type, holding Shift and then pressing the ``-`` key is annoying!