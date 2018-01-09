#!/bin/sh
# TODO; Moyen de mettre le mot de passe une seule fois, le "-t" n'étant pas fonctionnel

if [ $# != 1 ]
then
    echo "Missing arguments. Repository name needed."
    exit;
fi

## START ##

REPO=$1

# Get password
#read -sp 'Enter git password: ' PASSWORD
#echo ""

# Create repository
#blih -u cyril.colinet@epitech.eu -t ${PASSWORD} repository create ${REPO}
blih -u cyril.colinet@epitech.eu repository create ${REPO}

# Add permission
#blih -u cyril.colinet@epitech.eu -t ${PASSWORD} repository setacl ${REPO} ramassage-tek r
blih -u cyril.colinet@epitech.eu repository setacl ${REPO} ramassage-tek r

# Display permissions
#blih -u cyril.colinet@epitech.eu -t ${PASSWORD} repository getacl ${REPO}
blih -u cyril.colinet@epitech.eu repository getacl ${REPO}
